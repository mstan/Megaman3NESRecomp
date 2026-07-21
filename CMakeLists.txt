cmake_minimum_required(VERSION 3.20)
project(MegaMan3Recomp C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

set(NESRECOMP_ROOT ${CMAKE_SOURCE_DIR}/nesrecomp)

# nesrecomp/ and recomp-ui/ are git submodules (see .gitmodules); the pinned
# commit is the gitlink recorded in this repo. After cloning run setup.sh/.bat
# (git submodule update --init) to fetch them at the recorded commits.

# ---- Nestopia Oracle (optional) ----
# Set BEFORE including runner.cmake so it picks up the bridge sources.
option(ENABLE_NESTOPIA_ORACLE "Build with Nestopia emulator oracle for verify mode" ON)
if(ENABLE_NESTOPIA_ORACLE)
    set(NESTOPIA_DIR ${CMAKE_SOURCE_DIR}/nestopia-core)
endif()

include(${NESRECOMP_ROOT}/runner/runner.cmake)

list(APPEND CMAKE_PREFIX_PATH "${NESRECOMP_ROOT}/runner/external/SDL2/cmake")
find_package(SDL2 REQUIRED)

add_executable(MegaMan3Recomp
    ${NESRECOMP_RUNNER_SOURCES}
    extras.c
    nes_snapshot.c
    verify_mode.c
    generated/mega-man-3_full.c
    generated/mega-man-3_dispatch.c
)

target_include_directories(MegaMan3Recomp PRIVATE
    ${NESRECOMP_RUNNER_INCLUDE_DIRS}
    ${CMAKE_SOURCE_DIR}
    ${SDL2_INCLUDE_DIRS}
)

target_link_libraries(MegaMan3Recomp PRIVATE ${SDL2_LIBRARIES})

if(ENABLE_NESTOPIA_ORACLE)
    target_link_libraries(MegaMan3Recomp PRIVATE nestopia_core)
    target_compile_definitions(MegaMan3Recomp PRIVATE ENABLE_NESTOPIA_ORACLE)
endif()

if(WIN32)
    target_link_libraries(MegaMan3Recomp PRIVATE ws2_32)
    add_custom_command(TARGET MegaMan3Recomp POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "${NESRECOMP_ROOT}/runner/external/SDL2/lib/x64/SDL2.dll"
            "$<TARGET_FILE_DIR:MegaMan3Recomp>"
    )
endif()

target_compile_definitions(MegaMan3Recomp PRIVATE RECOMP_STACK_TRACKING)

if(MSVC)
    target_compile_options(MegaMan3Recomp PRIVATE /W3 /WX-)
    target_compile_options(MegaMan3Recomp PRIVATE /wd4102)
endif()

# ---- Pre-boot GUI launcher (recomp-ui / Dear ImGui) ----
include(${CMAKE_SOURCE_DIR}/recomp-ui/recomp_ui.cmake)
recomp_target_launcher_ui(MegaMan3Recomp BOXART ${CMAKE_SOURCE_DIR}/boxart.tga)

# Single-player (one controller) — hide the launcher's Player 2 card.
target_compile_definitions(MegaMan3Recomp PRIVATE NESRECOMP_GAME_PLAYERS=1)
