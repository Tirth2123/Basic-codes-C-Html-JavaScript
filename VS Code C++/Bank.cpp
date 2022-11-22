#include<iostream>

using namespace std;

int main(){
	
	int Bal=1000,withdraw,deposit,balance,c,w,d,i,ammount;

	for(i=0;i>=5;i++){

	}
	
	cout<<"Press 1 for Withdarw.";
	cout<<"\nPress 2 for Deposit.";	
	cout<<"\nPress 3 for Cheack Balance.";
	
	cout<<"\n\nEnter Your Choice: ";
	cin>>c;
	
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
	else if(c==2){
		cout<<"\nEnter Ammount You Want To Deposit: ";
		cin>>d;
		ammount = Bal+d;
		cout<<"\nAfter deposit "<<d<<" Rupees, Now in Your Account Balance Is: "<<ammount<<" Rupees\n";
	}
	else if(c==3){
		cout<<"Balance in Your Account is: "<<Bal;
		 
	}
	else{
		cout<<"\nYour Entered Choice "<<c<<" is Worng";
		cout<<"\nSelect Your Choice is Carefully";
	}
}

/*int main(){
	
	for(int i;i<=10;i++){
		cout<<"\n";
		bank();
	}
}*/