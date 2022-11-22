#include <iostream>
using namespace std;

class Input
{ 
    public:

    int a,b;   

    int Data()
    {
        cout<<"Enter First Number: ";
        cin>>a;
        cout<<"Enter Second Number: ";
        cin>>b;
    }
};

class Addition: public Input
{
    public: 
    int Add()
    {
        cout<<"Addition: "<<a+b;
    }
};

class Substraction: public Input
{
    public: 
    int Sub()
    {
        cout<<"Substraction: "<<a-b;
    }
};


class Multiplication: public Input
{
    public: 
    int Multi()
    {
        cout<<"Multiplication: "<<a*b;
    }
};

int main()
{
    Multiplication Obj;
    Obj.Data();
    Obj.Add();
    Obj.Sub();
    Obj.Multi();
}