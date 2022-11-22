#include <iostream>
using namespace std;

class Complex
{

    int a, b;

public:
    Complex(int,int); //Constructor Declaration
    void printNumber()
    {

        cout << "Your Number is" << a << "+" << b << "i" << endl;
    }

};


Complex :: Complex(int x,int y)//Parameterised Constructor
    {
        cout<<"The value of a & b ";
        cin>>a>>b;

        a = x;
        b = y;
    }

int main()
{

    Complex c1(int,int);
    c1.printnumber();
    return 0;
}