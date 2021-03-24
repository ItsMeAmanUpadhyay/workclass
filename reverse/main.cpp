#include <iostream>
using namespace std;

int main() {
    int a,r = 0,rem;
    cout<<"Please Enter the number"<<endl;
    cin>>a;
    while (a>0) {
        rem=a%10;
        r=r*10+rem;
        a=a/10;
    }
    cout<<"Reverse of given Number is "<<r<<endl;
    
    return 0;
}
