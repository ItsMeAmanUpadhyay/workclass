#include <iostream>
using namespace std;

int main() {
    int i,j,rows;
    cout<<"Enter the number of Rows = ";
    cin>>rows;
    for (i=1; i<=rows; i++) {
        for (j=1; j<=i; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    
    return 0;
}



