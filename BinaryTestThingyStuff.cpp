#include <iostream>
#include <sstream>
#include "BinaryOperations.h"

using namespace std;

operations::operations() {
    nibble = 0;
    cout << "default\n";
}

operations::operations(string input) {
    int end = 0;
    // WIP
    nibble = end;
}

operations::operations(int imp) {
    int end = 0;
    int copy = imp;
    while (copy > 0) {
        end += copy % 10;
        copy /= 10;
    }
    nibble = end;
}

int operations::addition(int thing, int other) {
    int end = thing + other;
    return end;
}

int operations::subtraction(int thing, int other) {
    int end = thing - other;
    return end;
}


int main() {
    operations b1 = 101;
    operations b2 = 110;
    int num = 101, num2 = 110;
    operations addition(num, num2);

    return 0;
}
