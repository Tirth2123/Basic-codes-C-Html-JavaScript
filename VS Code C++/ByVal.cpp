#include<iostream>
using namespace std;

int swap(int *a , int *b){
int t;

t=*a;
*a=*b;
*b=t;
}

int main(){
int x,y;

cout<<"Enter 1st Number: ";
cin>>x;

cout<<"\nEnter 2nd Number: ";
cin>>y;

cout<<"\nBefor Swap 1st Number: "<<x;
cout<<"\nBefore Swap 2nd Number: "<<y;

swap(x,y);

cout<<"\n\nAfter Swap: "<<x;
cout<<"\nAfter Swap: "<<y;

}


