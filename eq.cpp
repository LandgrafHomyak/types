#define TEST \
  COMiC_int8 i8; \
  COMiC_uint8 u8; \
  COMiC_int16 i16; \
  COMiC_uint16 u16; \
  COMiC_int32 i32; \
  COMiC_uint32 u32; \
  COMiC_int64 i64; \
  COMiC_uint64 u64; \


namespace limited
{

#include "limited/COMiC/_types.h"

    TEST
}

namespace fast
{

#include "fast/COMiC/_types.h"

    TEST
}

int main()
{
    return 0;
}