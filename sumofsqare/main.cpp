#include <iostream>
using namespace std;

int main() {
    int a,b = 1,sum=0;
    cout<<"Please Enter any number = ";
    cin>>a;
    do {
        sum=sum+b*b;
        b++;
    }while (b<=a);
    cout<<"Sum of square of given Number is "<<sum<<endl;
    
    return 0;
}
