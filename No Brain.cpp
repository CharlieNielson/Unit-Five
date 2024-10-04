#include <iostream>
#include "time.h"
using namespace std;




int main() {

    cout << "Testing time.\n";
    Time t1(0, 59, 53);
    Time t2(1, 60, 5);// 01:03:05

    Time t3 = t1 + t2;
    cout << t3;
    cout << "Add 10 seconds: ";
    t3 += 10;
    cout << t3 << endl;
    
    return 0;
}
