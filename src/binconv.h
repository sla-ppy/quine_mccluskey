#ifndef BINCONV_H
#define BINCONV_H

#include <iostream>

std::string binConv(int number) {
    std::string result;

    int cache = number;

    while (cache != 0 && cache != 1) {
        cache / 2;
    }

    result = std::to_string(cache % 2);
    return result;
};

#endif // BINCONV_H
