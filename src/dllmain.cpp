#include <windows.h>
#include "memory/offsets.h"

class Console {
public:
  Console() {
	AllocConsole();
	freopen_s(&file, "CONOUT$", "w", stdout);
  }

  ~Console() {
	fclose(file);
	FreeConsole();
  }

private:
  FILE* file = nullptr;
};

int __stdcall DllMain(HMODULE hmodule, DWORD reason, LPVOID reserved) {
  if (reason != 1) {
	return 1;
  }

  Console console();
  return 1;
}