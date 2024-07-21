#include <stdio.h>
#include "Colormapping.h"

void PrintReferenceManual()
{
    total_number_pair = numberOfMajorColors * numberOfMinorColors;
    printf("Pair Number | Major Color | Minor Color\n");
    printf("---------------------------------------\n");
    for (int pairNumber = 1; pairNumber <= total_number_pair; pairNumber++) {
        ColorPair colorPair = GetColorFromPairNumber(pairNumber);
        char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
        ColorPairToString(&colorPair, colorPairNames);
        printf("%11d | %-11s | %-10s\n", pairNumber, MajorColorNames[colorPair.majorColor], MinorColorNames[colorPair.minorColor]);
    }
}