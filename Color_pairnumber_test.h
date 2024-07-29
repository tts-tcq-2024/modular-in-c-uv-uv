#ifndef COLOR_TEST__H
#define COLOR_TEST__H
#include "Color_pairnumber_mapping.h"

void testNumberToPair(int pairNumber,enum MajorColor expectedMajor,enum MinorColor expectedMinor);
void testPairToNumber(enum MajorColor major,enum MinorColor minor,int expectedPairNumber);

#endif