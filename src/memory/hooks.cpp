#include <exception>
#include <cstdio>

#include "../../minhook/MinHook.h"
#include "hooks.h"

namespace hooks {
  using qword = __int64;

  using update_pos_fn = __int64(__fastcall*)(__int64, __int64, qword*);
  update_pos_fn update_pos_orginal = nullptr;

  __int64 __fastcall update_pos_hook(__int64 param1, __int64 param2, qword* param3) {
	auto ret = update_pos_orginal(param1, param2, param3);

	printf("hello from update_pos\n");

	return ret;
  }

  void enable_hooks() {
	if (MH_Initialize() != MH_OK) {
	  throw std::exception("MinHook failed to initialize");
	}
  }

  void restore_hooks() {
	if (MH_DisableHook(MH_ALL_HOOKS) != MH_OK) {
	  throw std::exception("MinHook failed to disable all hooks");
	}
	if (MH_RemoveHook(MH_ALL_HOOKS) != MH_OK) {
	  throw std::exception("MinHook failed to remove all hooks");
	}
	if (MH_Uninitialize() != MH_OK) {
	  throw std::exception("MinHook failed to uninitialize");
	}
  }
}