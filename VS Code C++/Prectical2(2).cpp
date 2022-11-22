#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter 1st Number: ";
    cin>>a;
    cout<<"\nEnter 2nd Number: ";
    cin>>b;
    
    cout<<"\nEnter 1 For Addition";
    cout<<"\nEnter 2 For Subtraction";
    cout<<"\nEnter 3 For Multiplication";
    cout<<"\nEnter 4 For Division";
    
    cout<<"\n\nSelect Any One of Them: ";
    cin>>c;
    switch(c){
    case 1:   
        cout<<"\nAddition is "<<a+b;
        break;
    case 2:   
        cout<<"\nSubtraction is "<<a-b;
        break;
    case 3:   
        cout<<"\nMultiplication is "<<a*b;
        break;
    case 4:   
        cout<<"\nDivision is "<<a/b;
        break;
    default:
        cout<<"\nInvalid input";
        break;
    }
    return 0;
}
