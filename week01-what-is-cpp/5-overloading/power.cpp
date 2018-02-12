/**
 * A demo of function overloading in C++
 */

#include <iostream>
#include <math.h>       /* log,exp */
using namespace std;

int power(int a, unsigned int b) {
    cout << "   power of uints" << endl;
    return b==0? 1: a*power(a,b-1);
}

// double power(int a, int b) {
//     cout << "   power of ints" << endl;
//     return exp(b*log(a));
// }

double power(double a, double b) {
    cout << "   power of reals" << endl;
    return exp(b*log(a));
}

int main() {
    cout << power(2,3) << endl;
    //cout << power(2,-3) << endl;  // wrong answer!
    //cout << power(2,3.5) << endl;  // call to 'power' is ambiguous!
    cout << power(2.0,3.5) << endl;
}
