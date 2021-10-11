#ifndef BINCONV_H
#define BINCONV_H

#include <iostream>

// This is basically a fake convert to binary that we just utilize
// Other methods include:
std::string binConv(int number) {
    std::string result;
    // int cache = number;
    if (number == 0) {
        result = std::to_string(number);
        return result;
    }

    while (number > 0) {
        if (number % 2 == 1) {
            result += '1';
        }
        if (number % 2 == 0) {
            result += '0';
        }

        number = number / 2;
    }

    std::reverse(result.begin(), result.end());
    return result;
};

#endif // BINCONV_H
