#pragma once
#include <windows.h>

namespace error {
  enum MsgBoxType {
	Error = MB_ICONERROR,
	Warning = MB_ICONWARNING,
	Info = MB_ICONINFORMATION
  };

  void msg_box(const char* msg, MsgBoxType type);
}