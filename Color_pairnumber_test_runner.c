#include "Color_pairnumber_test_runner.h"
#include "Color_pairnumber_test.h"

void RunTests()
{
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
}