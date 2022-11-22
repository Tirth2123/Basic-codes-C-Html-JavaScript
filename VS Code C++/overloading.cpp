#include <iostream>
using namespace std;

int sum(float a, float b)
{

    cout << "This Function is Using 2 Argument" << endl;
    return a + b;
}
int sum(int a, int b, int c)
{

    cout << "Using Function With 3 Argument" << endl;
    return a + b + c;
}
int main()
{

    cout << "The Value of a & b " << sum(3, 4) << endl;
    cout << "The Value of a & b " << sum(3, 4,9) << endl;

    return 0;
}