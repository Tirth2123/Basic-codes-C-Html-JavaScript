#include<iostream>
using namespace std;

int main()
{
    int a,b,c,Bal=1000,w,ammount;
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
    switch(c)
    {
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
    case 5:
        if(c==1){
		cout<<"\nEnter Ammount You Want To Withdraw: ";
		cin>>w;
		if(w>Bal){
			cout<<"Your Account Balance is low for this ammout";
		}
		else{
			ammount = Bal-w;
			cout<<"\nAfter Withdrawing "<<w<<" Rupees, Now in Your Account Balance Is: "<<ammount<<" Rupees\n";
		}
	}
        break;
    default:
        cout<<"\nInvalid input";
        break;
    }
    return 0;
}
