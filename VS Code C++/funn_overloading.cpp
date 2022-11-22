#include <iostream>
using namespace std;

class sample
{
    public: 

    int add(int a, int b)
    {
        cout<<a+b<<endl;
    }
    float add(float c, float d, float e)
    {
        cout<<c+d+e;
    }
};

int main()
{
    sample s;
    s.add(15,21);
    s.add(15.5,5.7,12.2);
}