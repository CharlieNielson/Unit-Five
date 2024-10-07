#pragma once
#include <iostream>
#include <sstream>
#include <ostream>
#include <cmath>
using namespace std;

class BinaryOperations {

    public:
        BinaryOperations();//default
        BinaryOperations(string);
        BinaryOperations(int);
        float operator + (BinaryOperations b);
        float operator - (BinaryOperations b);
        friend ostream& operator <<(ostream & os, float BinaryOperations);

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
    int copy = imp;
    while (copy > 0) {
        end += copy % 10;
        copy /= 10;
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
