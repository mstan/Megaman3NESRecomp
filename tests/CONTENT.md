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

Either player can enter a native Wily refight pod. The touching player leads
the original warp states `$11`, `$12`, then `$00`; the companion follows while
retaining personal health, ammunition and character. Check both seats entering
the Hard Man arena, independent controls after arrival, native/interpreter
equality, and a cold continuation saved during the native room refill.

A refight death creates the native return pod in slot 14 and defeated remnant
in slot 15. These two records belong to the shared world until the original
return warp completes. Check that either player's real kill creates one copy,
personal weapon changes preserve both records, and the other player can use
the return pod. The original hub must retain the defeat bit and omit that
boss's pod. Save immediately after the effects appear and during the native
refill; compare both cold continuations, native/interpreter output and PCM.
After actual independent-view draws, each paused Split half must match its
corresponding P1/P2 view, including the native shared pod and personal colors.

For the Kamegoro encounter, the remaining-wave health counter is `$B0`, while
`$B2` is a UI flag. A high-level final-wave prerequisite may reduce `$B0` to
the real current wave's health cost and the living turtle to one HP. The real
Buster hit must kill that turtle, let the native maker scan finish, and advance
to the next fortress stage. Never set the defeat or stage-clear flags.

Hard Man's ordinary slam and head-first descent each stun both living players.
The original final landing releases both to their native airborne controllers.
Use the real landing and shake code after a short phase/position prerequisite;
do not assign either player's stun or release as the asserted result. Compare
both branches with the interpreter and a cold state saved during the stun,
including current-build pictures and the exact PCM tail.

The Holograph encounter uses `$B0` for HP but does not set the ordinary `$5A`
boss flag. Defeating its real spawn `$2C` with either player's real Buster
must transfer the native victory controller, carry both players through the
original exit, and advance to Wily 4. Test the actual real body rather than
the two decoys. A visible damage window and one HP are allowed prerequisites.
Compare both attacker roles with the interpreter and a cold snapshot saved
during the native victory sequence, including exact PCM continuation.

Break Man's real defeat must let his departure start the receiving player's
native beam script on the real clock. A guest beam must advance the shared
scene rather than discard its stage-clear write in a private controller call.
Check the actual next scene, interpreter equality and a cold continuation.

Summon Rush Jet through the native weapon input, board it, and rise above the
ordinary floor. Position the partner to land on that Jet, then move the owner.
The partner must stay on the moving Jet with their own weapon and ammunition.
Its fuel cost must equal the original owner's run without a passenger. Check
both ownership roles, native/interpreter equality and current-build cold
state/picture/PCM continuation. The temporary collision platform must be
restored before personal AI or rendering; only the original Jet advances.
