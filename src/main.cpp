#include <iostream>

#include "binconv.h"

int main() {

    // * --- [1.] Convert to bin --- *
    for (int i = 0; i < 16; ++i) {
        std:: cout << binConv(i) << '\n';

        // cache the converted number
        std::string currentNumber = binConv(i);
        char* charPtr = &currentNumber[0];

        int onesCount{0};

        // * --- [2.a] Count ones --- *
        while (charPtr != nullptr) {
            if (*charPtr == '1') { // count ones
                onesCount++;
                charPtr++;
            } else if (*charPtr == '0') { // skip zeroes
                charPtr++;
            } else {
                break;
            }
        }

        std::cout << "Amount of ones: " << onesCount << '\n';
        std::cout << '\n';


        // * --- [2.b] Group by amount of ones --- *
    }

    return 0;
}
