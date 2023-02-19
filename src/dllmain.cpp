#include <windows.h>
#include <cstdio>
#include <exception>

#include "utils/Console.h"
#include "utils/error_msg.h"
#include "memory/hooks.h"

int __stdcall DllMain(HMODULE hmodule, DWORD reason, LPVOID reserved) {
  if (reason != 1) {
	return 1;
  }

  auto console = Console::get_console();
  printf("dll attached\n");

  try {
	hooks::enable_hooks();

	// todo: thread

	hooks::restore_hooks();
  }
  catch (const std::exception& e) {
	error::msg_box(e.what(), error::MsgBoxType::Error);
  }

  return 1;
}