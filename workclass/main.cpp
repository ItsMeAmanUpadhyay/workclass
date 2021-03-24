#include<iostream>
using namespace std;

class sum {

    public:
    int a,b;
    int take_input() {
        cout<<"Please enter Two numbers = ";
        cin>>a>>b;
        return 0;
    }
    int do_sum() {
        return a+b;
    }
    void print_output() {
        cout<<"The sum of "<<a<<" + "<<b<<"= "<<a+b<<endl;
    }
};
int main() {
    sum obj;
    obj.take_input();
    obj.print_output();
    return 0;
}
