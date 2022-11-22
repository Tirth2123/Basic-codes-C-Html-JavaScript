#include <iostream>
using namespace std;
//Before Swaping
// a=4 && b=5

//After Swaping

//a=5 && b=4

void swap(int a, int b) //temp a   b
{
    int temp=a;         //4    4   5
    a=b;                //4    5   5
    b=temp;             //4    5   4
      
}

// void swapPointer(int *a, int *b)
// {

//     int temp = *a; //4    4   5
//     *a = *b;       //4    5   5
//     *b = temp;
// }

// void swaprefVariable(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

int main()
{

int a=4;
int b=5;
    cout << "The Value Of X is " << a << endl;
    cout << "The Value Of Y is " << b << endl;

    swap(a,b);
    cout << "After Swap" << endl;
    cout << "The Value Of X is " << a << endl;
    cout << "The Value Of Y is " << b << endl;


    //Bluetooth-->Song User1-->User2
    //User-->Song-->Edit Kunj.mp4

    return 0;
}