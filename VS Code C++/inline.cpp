#include <iostream>
using namespace std;

inline int Add(int a,int b)
{
	return a+b;
}
inline int Sub(int a,int b)
{
	return a-b;
}
inline int Mul(int a,int b)
{
	return a*b;
}
inline int Div(float a,float b)
{
	return a/b;
}
int main()
{
	cout <<"Addition is: " <<Add(20,2);
	cout <<"\nSubstraction is: " <<Sub(20,2);
	cout <<"\nMultiplication is: " <<Mul(20,2);
	cout <<"\nDivision is: " <<Div(20,2);
	return 0;
}
