// IMPLEMENTATION BUILD HEADER

// We need uint128_t symbols as plain "extern", neither import nor export
// because we're linking the 128 and 256 object files into a single library
// So we can only have one export for symbol in any translation unit
#define UINT256_T_EXTERN
#include "uint128_t.h"
#undef UINT256_T_EXTERN

#ifndef _UNIT256_T_BUILD
  #define _UINT256_T_BUILD
  #include "uint256_t_config_include.h"
  #define UINT256_T_EXTERN _UINT256_T_EXPORT
#endif
#include "uint256_t_include.h"
