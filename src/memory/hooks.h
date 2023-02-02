#pragma once
#include <cstdint>


namespace hooks {
  void enable_hooks();
  void restore_hooks();
}

/* update_position
int64_t __fastcall sub_142FCE7F0(int64_t param1, int64_t param2, qword *param3)
{
  int64 result; // rax
  int64 v4; // rbx
  int32 v5; // r10d
  int64 v6; // rcx
  int64 velocity; // rdi
  int64 arg; // rax
  int64 offset_vel; // rdx
  int64 offset; // rcx

  result = param3[1];
  v4 = *(result + 440);
  v5 = *(result + 280);
  if ( *(*param3 + 129i64) )
  {
    if ( *(v4 + 696) )
    {
      result = *(*(*(v4 + 0x210) + 8i64 * (v5 >> 24)) + 64i64);
      v6 = 32i64 * v5;
      if ( *(result + v6 + 20) )
      {
        if ( *(*param3 + 128i64) )
        {
          velocity = *(result + v6 + 8);
          if ( velocity )
          {
            arg = sub_142C2CB70(param2);        // argument for sub_142B21A80
            result = sub_142B21A80(arg);        // hook this to get pointer?
            offset_vel = *(*(v4 + 176) + 4i64 * *(v4 + 400));
            offset = 6 * offset_vel;
            // X
            *(result + 8 * offset) = *(velocity + 48 * offset_vel);
            // Y
            *(result + 8 * offset + 16) = *(velocity + 48 * offset_vel + 16);
            // Z
            *(result + 8 * offset + 32) = *(velocity + 48 * offset_vel + 32);
          }
        }
      }
    }
  }
  return result;
}
*/