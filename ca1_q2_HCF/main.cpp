/* Q2. Write a program to print the Greatest Common Divisor of any two numbers.
 */
#include <iostream>
using namespace std;

int main() {
    int m,n;
    cout <<"Enter two number to find Greatest Comman Divisor (Separated By Space)= ";
    cin >>m>>n;
    if (m != n) {
        if (m>n) {
            m=m-n;
            cout <<"The GCD of both Number is "<<m<<endl;
        } else {
            n=n-m;
            cout <<"The GCD of both Number is "<<n<<endl;
        }
    }
    return 0;
}

