#include <iostream>
#include <conio.h>

using namespace std;

class Circle
{
	protected: float r,area;
	
	public: int input()
	{
		cout<<"Enter Radius Of Circle: ";
		cin>>r;
		cout<<"\n\nRadious of Circle is:"<<r;
		
	}
};
class Answer : public Circle
{
	public: int output()
	{
		area = 3.14*r*r;
		cout<<"\nArea Of Circle is: "<<area;
	}
	
}A;
	
int main()
{
	A.input();
	A.output();	
	// for(int i;i<=10;i++){
	// A.input();
	// A.output();	
	// }
}



