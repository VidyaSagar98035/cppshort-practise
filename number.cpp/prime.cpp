#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number of n : ";
    cin>>n;

    int i=2;
    while(i<=n-1) {
        if(n%i==0) {
            cout<<n<<" not a prime number."<<endl;
            break;
        }
        else {
            cout<<n<<" is a prime number."<<endl;
            break;
        }
        i++;
    }}