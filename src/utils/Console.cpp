#include "Console.h"

Console::Console() {
  AllocConsole();
  freopen_s(&file, "CONOUT$", "w", stdout);
}

Console::~Console() {
  fclose(file);
  FreeConsole();
}

Console* Console::get_console() {
  if (instance == nullptr) {
	instance = new Console();
  }
  return instance;
}