#include<iostream>
#include<conio.h>

using namespace std;

class Date
{
    public:
    
    int d,m,y;

    public:

    Date()
        {
            cout<<"Enter Date: ";
            cin>>d;
            cout<<"Enter Month: ";
            cin>>m;
            cout<<"Enter Year: ";
            cin>>y;

            switch(m)
                    {
                        case 1:
                        cout<<d<<"-"<<"Jan-"<<y;
                        break;

                        case 2:
                        cout<<d<<"-"<<"Feb-"<<y;
                        break;

                        case 3:
                        cout<<d<<"-"<<"Mar-"<<y;
                        break;

                        case 4:
                        cout<<d<<"-"<<"April-"<<y;
                        break;

                        case 5:
                        cout<<d<<"-"<<"May-"<<y;
                        break;

                        case 6:
                        cout<<d<<"-"<<"June-"<<y;
                        break;

                        case 7:
                        cout<<d<<"-"<<"July-"<<y;
                        break;

                        case 8:
                        cout<<d<<"-"<<"Aug-"<<y;
                        break;

                        case 9:
                        cout<<d<<"-"<<"Sep-"<<y;
                        break;

                        case 10:
                        cout<<d<<"-"<<"Oct-"<<y;
                        break;

                        case 11:
                        cout<<d<<"-"<<"Nov-"<<y;
                        break;

                        case 12:
                        cout<<d<<"-"<<"Dec-"<<y;
                        break;

                        default:
                        cout<<"Enter Right Month";
                    }
        }
};

int main()
{
    Date A;
    return 0;
}