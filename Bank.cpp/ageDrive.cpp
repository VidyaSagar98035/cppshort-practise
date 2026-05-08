#include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"enter the age :";
    cin>>age;

    if (age >= 21) {
        cout<<"get the driving licence : "<<endl;
    }
    else {
        cout<<"Cannot get the driving licence : "<<endl;
    }
    return 0;
}