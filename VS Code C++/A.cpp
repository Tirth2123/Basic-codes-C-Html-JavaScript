#include <iostream>
using namespace std;

class A
{
    public:
    int a = 50;
    void show();
       
    
};

void A::show(){
     cout<<"Outside Class Defination";
	 cout<<"\n"<<a;
}


int main(){
    A B;
    B.show();
    return 0;
}