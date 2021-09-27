#include <iostream>

#include "binconv.h"

// ROADMAP:
// 1. represent char by bit
// 2. take in array of inputs,

int main() {


    // dec value represented in ascii: 48 - 57
    char c{48};
    char d{57};
    // std::cout << c;
    // std::cout << d;


    // yes this is not very smart but might come handy sometime? probably not, but i uploaded it this way.
    int convInput{9};
    binConv(convInput);

    return 0;
}
