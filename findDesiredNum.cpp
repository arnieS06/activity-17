#include <iostream>
#include "findDesiredNum.hpp"

namespace search {  // Wrap the function inside the search namespace
    int findDesiredNum(int arrayNumbers[], int desiredNum, int arraySize) {
        for (int n = 0; n < arraySize; n++) {
            if (arrayNumbers[n] == desiredNum) {
                std::cout << "\nYour number exists at index ";
                return n;
            }
        }

        std::cout << "\nYour number doesn't exist in this array." << std::endl;
        return -1;
    }
}
