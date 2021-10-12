#include <iostream>
#include <vector>

#include "binconv.h"

int main() {

    // * --- [0.] Input handling --- *

    std::vector<char> inputChars = {'A', 'B','C', 'D'};
    std::vector<int> inputNumbers = {1, 5, 6, 7, 8, 9, 10, 11, 14, 15};



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

            // * --- [2.b] Group elements by amount of ones --- *
            // Depending on the variable count, we create new groups
        }

        std::cout << "Amount of ones: " << onesCount << '\n';
        std::cout << '\n';
    }

    return 0;
}
