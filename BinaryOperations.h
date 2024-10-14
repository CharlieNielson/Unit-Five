#pragma once
#include <iostream>
#include <sstream>
#include <ostream>
#include <cmath>
using namespace std;

class operations {

    public:
        operations();//default
        operations(string);
        operations(int);
        int addition(int, int);
        int subtraction(int, int);
        friend ostream& operator <<(ostream & os, float operations);

    private:
        int nibble;
};
