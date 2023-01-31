#pragma once
#include <cstdint>
#include <array>

#include "memory.h"
#include "../generic/Vector.h"
#include "../enums/MovementState.h"

// credits to https://github.com/tremwil/CatalystAPI for the offsets
namespace pointers {
  namespace player {
	inline Pointer<int> health {.base = 0x142547f90, .offsets = {0x28, 0x0, 0x20}}; // value from 1 to 7
	inline Pointer<Vector3<float>> position {.base = 0x142578a68, .offsets = {0x70, 0x98, 0x238, 0x18, 0x22d0}};
	inline Pointer<Vector3<float>> last_ground_pos {.base = 0x1423da028, .offsets = {0x20, 0x20, 0x40, 0x20, 0x0}};
	inline Pointer<MovementState> movement_state {.base = 0x142576fdc, .offsets = {}};
	inline Pointer<float> camera_yaw_sin {.base = 0x142578a68, .offsets = {0x70, 0x98, 0x238, 0x18, 0x22c4}};
	inline Pointer<float> camera_yaw_cos {.base = 0x142578a68, .offsets = {0x70, 0x98, 0x238, 0x18, 0x22cc}};
  }
  namespace game {
	inline Pointer<float> timescale {.base = 0x142142a68, .offsets = {0x48}};
	inline Pointer<int> time_of_day {.base = 0x14255c2f8, .offsets = {0x8, 0x28, 0x30}};
	inline Pointer<Vector3<float>> waypoint_pos {.base = 0x1425789b0, .offsets = {0x70, 0x128, 0x2270}};
  }
}