#include <iostream>
using namespace std;

//class classname

class student
{

private:
    int a, b, c;

public:
    int d, e;

    void setData(int a1, int a2, int a3);

    void getData()
    {

        cout << "The Value of A " << a << endl;
        cout << "The Value of B " << b << endl;
        cout << "The Value of C " << c << endl;
        cout << "The Value of D " << d << endl;
        cout << "The Value of E " << e << endl;
    }
};

void student :: setData(int a1, int b1, int c1)
{

    a = a1;
    b = b1;
    c = c1;
}

int main()
{

    student kunj,vikas;

    kunj.d=34;
    kunj.e=26;

    kunj.setData(2,3,4);

    kunj.getData();


    vikas.d=20;
    vikas.e=11;
    vikas.setData(3,6,7);
    vikas.getData();



    return 0;
}