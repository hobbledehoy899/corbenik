#ifndef __PATCH_HEADER__
#define __PATCH_HEADER__

#include <stdint.h>

// TODO - Temporary.
#define BUILTIN 1

#ifdef BUILTIN
  // Build patch into CFW instead of as module.
  #include "../std/unused.h"
  #include "../std/memory.h"
  #include "../firm/firm.h"
  #include "../firm/fcram.h"
  #include "../config.h"
  #include "../common.h"

  #define PATCH(name) int patch_##name ()
#elif MODULE
  // Build patch as loadable executable.

  // TODO - Includes.

  #define PATCH(name) int main()
#else
  #define PATCH(name) (void)

  // Don't build patch; Exclude its code.
#endif

#endif