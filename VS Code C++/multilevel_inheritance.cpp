#include <iostream>
using namespace std;

class First
{ 
    public:

    int a,b,c;   

    int input()
    {
        cout<<"Enter First Number: ";
        cin>>a;
        cout<<"Enter Second Number: ";
        cin>>b;
    }
};

class Second: public First
{
    public:
    int operation()
    {
        c=a+b;
    }
};

class Third: public Second
{
    public: 
    int output()
    {
        cout<<"Addition of "<< a<<" & "<<b <<" is: "<<c;
    }
};

int main()
{
    Third Obj;
    Obj.input();
    Obj.operation();
    Obj.output();
}