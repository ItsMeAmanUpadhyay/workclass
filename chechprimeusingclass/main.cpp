#include<iostream>
using namespace std;
class checkprimeno
{
  public:

    int check(int a)
    {
        int i, flag=0;
        for(i=2;i<a;i++)
        {
            if (a%i==0)
            {
            flag=1;
            break;
            }
        }
        return flag;
    }
};
int main()
{
    int a,pri;
    cout<<"Enter any number:";
    cin>>a;
        checkprimeno obj;
        pri=obj.check(a);
    if ( pri==0 )
        cout<<"This is prime number"<<endl;
    else
        cout<<"This is not a prime number"<<endl;
    return 0;
}
