#include <stdio.h>
#include "Color_pairnumber_mapping.h"
#include "Color_code_manual.h"
#include "Color_pairnumber_mapping.h"

void PrintReferenceManual()
{
    printf("Pair Number | Major Color | Minor Color\n");
    printf("---------------------------------------\n");
    for (int pairNumber = 1; pairNumber <= numberOfMajorColors * numberOfMinorColors; pairNumber++) {
        ColorPair colorPair = GetColorFromPairNumber(pairNumber);
        char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
        ColorPairToString(&colorPair, colorPairNames);
        printf("%11d | %-11s | %-10s\n", pairNumber, MajorColorNames[colorPair.majorColor], MinorColorNames[colorPair.minorColor]);
    }
}