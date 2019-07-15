#include <math.h>
#define SET(pt, setNum, array) (setNum << 3*(pt - 1) + (short)pow(2, (float)(3 * setNum - 2)) + (short)pow(2, (float)(sizeof(array) * (8 - pt * 3) - 1)))
