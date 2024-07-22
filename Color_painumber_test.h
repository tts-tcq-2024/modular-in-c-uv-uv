#ifndef COLOR_TEST__H
#define COLOR_TEST__H
#include "Color_pairnumber_mapping.h"

void ColorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);

#endif