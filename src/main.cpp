#include <iostream>

#include "binconv.h"

// ROADMAP:
// 1. represent char by bit
// 2. take in array of inputs
// ok

int main() {

    for (int i = 0; i < 16; ++i) {
        std:: cout << binConv(i) << '\n';
    }

    return 0;
}
