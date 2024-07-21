#include <stdio.h>
#include <assert.h> 
#include "Colormapping.h"

void PrintColorPair(int pairNumber, const ColorPair* colorPair, int show_pair_or_number)
{
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(colorPair, colorPairNames);
    if (show_pair_or_number) 
    {
        printf("Got pair number %d: %s\n", pairNumber, colorPairNames);
    } else 
    {
        printf("Got pair %s\n", colorPairNames);
    }
}

void testNumberToPair(int pairNumber,enum MajorColor expectedMajor,enum MinorColor expectedMinor)
{
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    PrintColorPair(pairNumber,&colorPair,0);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}

void testPairToNumber(enum MajorColor major,enum MinorColor minor,int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    assert(pairNumber == expectedPairNumber);
}

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}
