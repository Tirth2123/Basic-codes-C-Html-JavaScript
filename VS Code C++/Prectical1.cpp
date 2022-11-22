#include <iostream>
using namespace std;

struct student
{
    char name[50],address[50];
    long no;
};

int main() 
{
    student s;
    cout<<"Enter Your Name: ";
    cin>>s.name;
    cout<<"Enter Your Address: ";
    cin>>s.address;
    cout<<"Enter Your Contect Number: ";
    cin>>s.no;

    cout<<"\nName: " << s.name;
    cout<<"\nAdress: " << s.address;
    cout<<"\nContect Number: " << s.no;
    return 0;
}

