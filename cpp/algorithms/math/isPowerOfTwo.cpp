// https://stackoverflow.com/questions/600293/how-to-check-if-a-number-is-a-power-of-2
#include <stdio.h>

bool IsPowerOfTwo(ulong x) { return (x & (x - 1)) == 0; }