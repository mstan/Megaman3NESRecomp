# Native boss damage regression

Gemini Man's dual-body AI calls the cartridge's `$8003` trampoline into
`$8109`, beyond the ordinary `$8102` vulnerability-flag check. Test both
entries: passing the ordinary boss damage route does not cover Gemini.

With local co-op enabled, enter the native Gemini room and finish its intro.
Position P2 to fire a Buster through a living Gemini body. P2 must reduce the
shared native boss HP. Repeat with an airborne Proto Man reflecting a native
enemy projectile while a special weapon is selected; the reflected hit must
use Buster damage and retain the selected weapon and ammunition.

For each attack, reducing both linked bodies to one HP is an allowed setup
prerequisite. The real attack must start the original death explosions,
victory sequence, weapon award and password screen. Do not set clear flags.
The qualified short regression also aligns the boss position for the attack
window; it does not qualify the entire movement pattern.

Compare native and interpreter continuations, including PCM. Save during the
native victory sequence and confirm that a cold continuation produces the
same current-build state, final pictures and PCM tail. Keep the ordinary
native projectile reflection regression to check the `$8102` fall-through.

After the first Doc Robot in each Doc stage, the original victory routine
returns to ground control in the same stage. Both players must then move
independently. The paired victory follow must end there, while the final
Doc Robot's native teleport and stage exit keep their normal paired behavior.
The Air Man check also compares native/interpreter output and a cold state
saved during the victory sequence, including the PCM tail.
