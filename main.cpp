#include <iostream>
#include "findDesiredNum.hpp"
using namespace std;

int main() {

    int arrayNumbers[] = {24, 4, 6, 99, 10, 23, 405, 298, 29, 9};
    int size = sizeof(arrayNumbers)/sizeof(int);
    int desiredNum;

    cout << "There's an integer array. Give me a number that you want to find in it. I'll tell you if it exists in there. -> ";
    cin >> desiredNum;

    cout << "Here's what I found: " << findDesiredNum(arrayNumbers, desiredNum, size);

    return 0;

}
