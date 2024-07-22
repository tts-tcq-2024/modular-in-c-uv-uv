#include <stdio.h>
#include <assert.h> 
#include "Colormapping.h"
#include "Color_pairnumber_test.h"

const int MAX_COLORPAIR_NAME_CHARS = 16;


int main()
{
    RunTests();
    PrintReferenceManual();
    return 0;
}
