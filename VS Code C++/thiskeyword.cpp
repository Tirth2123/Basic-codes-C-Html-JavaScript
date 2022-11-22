#include <iostream>
using namespace std;

class A
{
    int a;
    int b;

public:
    void setData(int a, int b)
    {

        this->a = a;
        this->b = b;
    }
    void getData()
    {
        cout << "The Value of variable a is " << a << endl;
        cout << "The Value of variable b is " << b << endl;
    }
};

int main()
{

    A kunj;
    kunj.setData(2,32);
    kunj.getData();

    return 0;
}