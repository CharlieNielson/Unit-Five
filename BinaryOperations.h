#pragma once
#include <ostream>
#include <cmath>
using namespace std;

//I'm losing my mind trying to understand what to do. welcome to the ordered chaos in my brain.

class BinaryOperations {

    public:
        BinaryOperations();//default
        BinaryOperations(string);
        BinaryOperations(int);
        float operator + (BinaryOperations b);
        float operator - (BinaryOperations b);
        friend ostream& operator<<(ostream &, const BinaryOperations&);

    private:
        float nibble;
};

BinaryOperations::BinaryOperations() {
    nibble = 0;
    cout << "default\n";
}

BinaryOperations::BinaryOperations(string input) {
    int end = 0;
    // WIP
    nibble = end;
}

BinaryOperations::BinaryOperations(int imp) {
    int end = 0;
    int num = 10;
    int copy = imp;
    for (int i = 0; i < imp of (log10(number) + 1); i++) {
        int cop = copy % num;
        if (cop = 1) {
            end += (1 ^ (2 ^ i));
            copy -= copy % num;
        }
        num *= 10;
    }
    nibble = end;
}

float BinaryOperations BinaryOperations::operator +(float BinaryOperations other) {
    float end = nibble + other.nibble;
    return end;
}

float BinaryOperations BinaryOperations::operator -(float BinaryOperations other) {
    float end = nibble - other.nibble;
    return end;
}
