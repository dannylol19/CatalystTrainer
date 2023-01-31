#pragma once

// https://github.com/tremwil/CatalystAPI/blob/master/Catalyst/Memory/MovementState.cs
enum MovementState {
  Dead = -1,
  StateChange = 0,
  Standing = 1,
  Airborne = 2,
  Vaulting = 3,
  Wallclimb = 4,
  HorizontalBar = 5,
  VolountarySlide = 6,
  CoilJump = 7,
  Wallrun = 8,
  MagropePullObject = 10,
  ClimbLadderOrPipe = 11,
  HorizontalBarSwing = 13,
  GoodLanding = 16,
  InvolountarySlide = 17,
  LedgeGrab = 18,
  Crouching = 19,
  LightAttackSpecial = 20,
  Springboard = 22,
  MagropeClimb = 23,
  BadLanding = 24,
  MagropeSwing = 25,
  HeavyAttack = 26,
  LightAttack = 27,
  Zipline = 29,
  Shifting = 30,
  OpenDoor = 31
};