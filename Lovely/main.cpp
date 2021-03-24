#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  int i,j,k,n;
  char s[20];
  cout<<"Enter a Word = ";
  cin>>s;
  n=strlen(s);
  for(i=0;i<n;i++)
        {
            for(j=0;j<n-i-1;j++)
                cout<<" ";
            for(k=0;k<=i;k++)
                cout<<s[k];
            cout<<endl;
        }
    return 0;
}


