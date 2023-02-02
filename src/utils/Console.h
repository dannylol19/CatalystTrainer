#pragma once
#include <windows.h>
#include <cstdio>

class Console {
public:
  static Console* get_console();
  ~Console();
private:
  FILE* file = nullptr;
  static Console* instance;
  Console();
};