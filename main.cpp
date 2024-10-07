#include <iostream>
using namespace std;

int main() {

    int arrayNumbers[] = {24, 4, 6, 99, 10, 23};
    int size = sizeof(arrayNumbers)/sizeof(int);
    int desiredNum = 99;

    for (int i = 0; i < size; i++) {
        if (i = desiredNum) {
            cout << "Element found! it was " << i;
        }
        else {
            continue;
        }
    }
}
