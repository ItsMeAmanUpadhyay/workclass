#include<iostream>
using namespace std;
char a='c';
class scopeop{
public:
void disp()
{
 char a='b';
 int b=10;
cout<<"The Local Value Of b is "<<b<<endl;
    cout<<"The Local Value Of a is "<<a<<endl;
cout<<"The Global Value Of a is "<<::a<<endl;
}
};
int main( )
{
scopeop s;
s.disp();

return 0;
}
