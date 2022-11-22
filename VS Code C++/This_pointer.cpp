#include <iostream>
using namespace std;

class sample
{
    int a;
    public: 
    sample()
    {
        a=10;
    }

    void disp(int a)
    {
        cout<<"The value of argument a="<<a;
        cout<<"\nThe value of data member a="<<this->a;
    }
};

int main()
{
    sample S;
    S.disp(20);
    return 0;
}