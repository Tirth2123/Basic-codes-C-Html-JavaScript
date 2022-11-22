#include <iostream>
using namespace std;

class sample
{
    public: 
    int a=15,b=16;
    string c="Tirth",d=" Shah";

    int opp_overloading()
    {
        cout<<a+b<<endl;
        cout<<c+d;
    }
};

int main()
{
    sample s;
    s.opp_overloading();
}