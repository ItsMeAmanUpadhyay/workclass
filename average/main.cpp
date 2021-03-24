#include <iostream>
using namespace std;
int main()
{
    int a,i,nc,count=0,sum=0;
    float avg;
    cout <<"Please enter total Number Count : ";
    cin >> nc;
    
    for (i=1; i<=nc; ++i) {
        cout <<"Enter a number : ";
        cin >> a;
        
        if (a>=0) {
            sum=sum+a;
            ++count;
            }
    }
    avg=(float)sum/count;
    cout<<"Avg of all Positive Number is "<< avg << endl ;
      return 0;
    }
