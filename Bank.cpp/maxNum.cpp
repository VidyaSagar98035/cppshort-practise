#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout<<"Enter two number:";
    cin>>a>>b;

    if(a > b) {
        cout<<"Maximum number is: "<<a<<endl;
    }
    else {
        cout<<"Maximum number is: "<<b<<endl;
    }
    return 0;
}