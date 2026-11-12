# Shared Rush Coil regression

Use the USA ROM and a current build with local co-op and quick weapon switching
enabled. Keep a disposable profile and muted output for unattended checks.

1. In a flat stage area, give one seat Coil energy and select Coil with L/R.
   Press B to summon it and wait for its native waiting animation (OAM `$D8`,
   actor 1 active, `$05A1 == 0`, `$0581 & 1`). Keep the other seat away.
2. From this setup, land the owner on the Coil. Record the native spring's
   vertical position, fraction and velocity, and the owner's energy usage.
3. Restore the setup and land the other seat on the Coil while the owner stays
   away. The partner must spring with the same native physics. Only the Coil
   owner's energy decreases, by three units. The rider keeps its weapon,
   energy and existing personal projectile pool.
4. Repeat with the seats exchanged. Also select Needle Cannon through L/R on
   the rider and fire while landing; the rider's native Needle remains active
   after the spring and the Coil owner retains its helper.
5. Compare Native and interpreter state, RAM, native/presented images and PCM.
   Save during landing and check cold continuation against the uninterrupted
   run, including the first image and PCM suffix. Private-call failures must
   remain zero.

Compare physics after equal completed native controller updates. The foreign
spring's additional native work can change the number of output-only lag
frames, so equal display-frame counts alone are not an exact physics oracle.

The implementation executes the retail Coil prefix at `$CE61`, its ammo routine
at `$DED8`, and the rider's airborne tail at `$D007`. The ammo hook stops only
the isolated prefix's known `$CE84` call frame; the live CPU and stack continue
unchanged. Marine, Jet and other weapon interactions require their own checks.
