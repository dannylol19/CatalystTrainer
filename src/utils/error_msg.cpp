#include "error_msg.h"

namespace error {
  void msg_box(const char* msg, MsgBoxType type) {
	MessageBox(nullptr, msg, "Catalyst Trainer", MB_OK | (UINT)type);
  }
}