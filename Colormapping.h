#ifndef COLOR_H
#define COLOR_H


enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

extern const char* MajorColorNames[];
extern int numberOfMajorColors;
extern const char* MinorColorNames[];
extern int numberOfMinorColors;
extern const int MAX_COLORPAIR_NAME_CHARS;
extern int total_number_pair;

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

void ColorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);
void PrintColorPair(int pairNumber, const ColorPair* colorPair, int show_pair_or_number);
void PrintReferenceManual();
#endif