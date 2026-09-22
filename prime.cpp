#include <iostream>
using namespace std;
int main() {
    int n,i=2;
    cout<<"Enter a number: ";
    cin>>n;
    while(i<n){
        if(n%i==0){
            cout<<n<<" is not a prime number."<<endl;
            break;
        }
        i++;
    }
    if(n&i!=0){
        cout<<n<<" is a prime number."<<endl;
    }
    return 0;
}