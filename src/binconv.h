#ifndef BINCONV_H
#define BINCONV_H

#include <iostream>

// This is basically a fake convert to binary that we just utilize
// Other methods include:
std::string binConv(int number) {
    std::string result;

    // if first element is 0, return 0
    if (number == 0) {
        result = std::to_string(number);
        return result;
    }

    // assign ones and zeroes until we can divide
    while (number > 0) {
        if (number % 2 == 1) {
            result += '1';
        }
        if (number % 2 == 0) {
            result += '0';
        }

        number = number / 2;
    }

    // very important to reverse the end results!!!
    std::reverse(result.begin(), result.end());
    return result;
};

#endif // BINCONV_H
