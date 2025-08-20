#include <iostream>
#include <assert.h>

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            std::cout << i * 5 + j << " | " << majorColor[i] << " | " << minorColor[i] << "\n";
        }
    }
    return i * j;
}

void testPrintColorMap() {
    std::cout << "\nPrint color map test\n"; 
    // Strengthened tests
    std::string expectedFirst = "1 | White | Blue";
    std::string expectedSecond = "2 | White | Orange";
    std::string expectedLast = "25 | Violet | Slate";

    // These will FAIL with the buggy implementation
    assert(formatColorPair(1, "White", "Blue") == expectedFirst);
    assert(formatColorPair(2, "White", "Orange") == expectedSecond);
    assert(formatColorPair(25, "Violet", "Slate") == expectedLast);
    int result = printColorMap();
    assert(result == 25);
    std::cout << "All is well (maybe!)\n";
}
