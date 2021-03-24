/* Q1. Write a program to read the marks of a student in three different subjects and print the highest marks secured by him.
 */
#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout <<"Enter the Marks of three subjects(separated by space): ";
    cin >>a>>b>>c;
    if (a>b & a>c) {
        cout <<"Your Highest Score is "<<a<<endl;
        } else if (b>a & b>c) {
            cout <<"Your Highest Score is "<<b<<endl;
        } else {
            cout <<"Your Highest Score is "<<c<<endl;
    }
    return 0;
}
