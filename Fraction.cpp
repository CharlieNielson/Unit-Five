#include "Fraction.h"
#include <iostream>
Fraction f1;//Default Constructor

Fraction f2(2, 10);

Fraction f3(7, 15);

Fraction::Fraction() {
   numerator = 0;
   denominator = 1;
   cout << "Default" << endl;
}

Fraction::Fraction(int num, int den) {//Overloaded Constructor
   numerator = num / gcd(num, den);
   denominator = den / gcd(num, den);
   cout << "Overloaded" << endl;
}

Fraction::Fraction(const Fraction& other) { //copy constructor
   numerator = other.numerator;
   denominator = other.denominator;
   cout << "Copy" << endl;
}

int Fraction::getNumerator() {
   return numerator;
}

int Fraction::getDenominator() {
   return denominator;
}

const Fraction Fraction::operator + (const Fraction other) {   
   int newNumerator = numerator * other.denominator 
       + other.numerator * denominator;
   int newDenominator = denominator * other.denominator;


   return Fraction(newNumerator, newDenominator);
}

const Fraction Fraction::operator - (const Fraction other) {   
   int newNumerator = numerator * other.denominator 
       - other.numerator * denominator;
   int newDenominator = denominator * other.denominator;


   return Fraction(newNumerator, newDenominator);
}

const Fraction Fraction::operator / (const Fraction other) {   
   int newNumerator = numerator * other.denominator;
   int newDenominator = denominator * other.numerator;


   return Fraction(newNumerator, newDenominator);
}

const Fraction Fraction::operator * (const Fraction other) {   
   int newNumerator = numerator * other.numerator;
   int newDenominator = denominator * other.denominator;


   return Fraction(newNumerator, newDenominator);
}

int Fraction::gcd(int n, int d) {
n = abs(n);
   	d = abs(d);
    	while (n != d) {
           if (n > d)
               n -= d;
           else
               d -= n;
       }
       return n;
}

ostream& operator << (ostream& out, const Fraction &f) {
   out << f.numerator << " / " << f.denominator;
   return out;
}


int main() {

   cout << "The Numerator of f3 is: " << f3.getNumerator() << endl;
   cout << "The Denomerator of f3 is: " << f3.getDenominator() << endl;
   Fraction f4 = f2;
   cout << f1 << endl;
   cout << f2 << endl;
   cout << f3 << endl;
   cout << f4 << endl;
   f1 = f2 + f3;
   cout << f2 << " + " << f3 << " = " << f1 << endl;
   f1 = f3 - f2;
   cout << f3 << " - " << f2 << " = " << f1 << endl;
   f1 = f3 / f2;
   cout << f3 << " / " << f2 << " = " << f1 << endl;
   f1 = f2 * f3;
   cout << f2 << " * " << f3 << " = " << f1 << endl;


   return 0;
}
