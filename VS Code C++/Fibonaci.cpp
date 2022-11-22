#include<iostream>
using namespace std;

int main(){
    int a=0, b=1, f, i, n;

    cout<<"Enter Any Number: ";
    cin>>n;
    cout<<a<<" "<<b<<" ";

    for(i=2;i<n;i++){
        f=a+b;
        cout<<f<<" ";
        a=b;
        b=f;
    }
}
