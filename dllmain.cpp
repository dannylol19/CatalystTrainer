#include <windows.h>

int __stdcall DllMain(HMODULE hmodule, DWORD reason, LPVOID reserved) {
  if (reason != 1) {
	return 1;
  }

  return 1;
}