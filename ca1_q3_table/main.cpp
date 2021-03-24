/* Q3. Write a program to print the tables of numbers starting from m to n, where m and n values will be entered by the user.
 */
#include <iostream>
using namespace std;

int main() {
    int m,n;
    cout <<"Enter two number (Separated By Space)= ";
    cin >>n>>m;
    if (m != n) {
        if (m>n) {
            for (int i=n; i<=m; i++) {
                n=i;
                cout<<"Table - "<<n<<": ";
                for (int a=1;a<=10;a++) {
                    cout<<n*a<<" ";
                    }
                cout<<"\n";
                }
             }
        else {
            for (int i=m; i<=n; i++) {
                m=i;
                cout<<"Table - "<<m<<": ";
                for (int a=1;a<=10;a++) {
                    cout<<m*a<<" ";
                    }
                cout<<"\n";
                }
             }
    }
    return 0;
}
