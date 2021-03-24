#include <iostream>
using namespace std;

class num_location
{
    public:
        int a[50],count,i,num;
        void find();
        void input()
        {
            cout << "Enter Number of Elements in Array\n";
            cin >> count;
            cout << "Enter " << count << " numbers"<<endl;
                for(i=0;i<count;i++)
                {
                    cin>>a[i];
                }
        }
};
        void num_location::find()
        {
            cout<<"Enter a number to find in Array"<<endl;
            cin>>num;
            for(i=0;i<count;i++)
            {
                if(a[i]==num)
                {
                    cout<<"This Number is at "<<i+1<<" Place " <<endl;
                    break;
                }
            }
                if(i==count)
                {
                    cout<<"Element Not Present in Input Array"<<endl;
                }
        }
int main()
{
    num_location f;
    f.input();
    f.find();
    return 0;
}
