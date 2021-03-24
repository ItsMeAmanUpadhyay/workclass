#include <iostream>
using namespace std;

int main() {
    int a,b = 1,sum=0;
    cout<<"Please Enter the number"<<endl;
    cin>>a;
    while (b<=a) {
        sum=sum+b;
        b++;
    }
    cout<<"Sum of given Number is "<<sum<<endl;
    
    return 0;
}
