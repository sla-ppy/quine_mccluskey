#ifndef BINCONV_H
#define BINCONV_H

#include <iostream>
#include <vector>

void binConv(int number) {
    int converted = number;
    int cache = number;

    // 1. output modulo
    // 2. divide by 2
    // 3. save the result in a var
    // 4. do until no more division

    int count{0};

    while(converted != 1) {
        converted = cache;
        std::cout << converted % 2;
        cache = converted / 2;
        count++;
    }

    std::cout << '\n';
    std::cout << "Amount of characters to save in char[]: " << count << '\n';


};

#endif // BINCONV_H
