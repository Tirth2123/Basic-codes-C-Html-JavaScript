#include <iostream>
using namespace std;

class Square
{ 
    public:

    float S_Length,S_Area;   

    int Area_Square()
    {
        cout<<"Enter length of Square: ";
        cin>>S_Length;
        S_Area = S_Length*S_Length;
    }
};

class Triangle
{
    public: 

    float T_Length,T_Base,T_Area;

    int Area_Triangle()
    {
        cout<<"Enter Length of Triangle: ";
        cin>>T_Length;
        cout<<"Enter Base of Triangle: ";
        cin>>T_Base;
        T_Area=0.5*T_Length*T_Base;
    }
};

class Area: public Square,public Triangle
{
    public: 
    int output()
    {
        cout<<"Area of SQUARE is: "<<S_Area;
        cout<<"\nArea of TRIANGLE is: "<<T_Area;
    }
};

int main()
{
    Area Obj;
    Obj.Area_Square();
    Obj.Area_Triangle();
    Obj.output();
}