#include<iostream>
using namespace std;

class Abc
{
    public:
    Abc()
    {
        cout<<"Counstructor";
    }
    ~Abc()
    {
        cout<<"\n"<<"Destructor";
    }
};

int main()
{
    Abc A;
}