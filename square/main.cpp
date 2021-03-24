#include <iostream>
using namespace std;

int main() {
    int num,sum=0;
    loop:
    cout <<"Enter the number: ";
    cin >> num;
    if (num>0) {
        sum= sum+(num*num);
        goto loop;
        }
    cout <<"Sum of square of all number : "<<sum<<endl;
    return 0;
}
