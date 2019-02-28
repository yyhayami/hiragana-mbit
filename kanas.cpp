#include "pxt.h"
using namespace pxt;

namespace hiragana {
  //%
  int32_t addNumber(int32_t n)
  {
	  return n+1;
	}
  //%
  int32_t searchMoji(int32_t c)
  {
    char *s = "ABC";
    int32_t i;
    while (s[i] != 0) {
      i++;
    }
		return i;
	}
}
