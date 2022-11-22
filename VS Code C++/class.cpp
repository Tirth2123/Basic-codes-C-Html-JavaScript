#include<iostream>
using namespace std; 
class Employee{
//By Defualt it is private

private:
    int n;
//Inside the class
    private:
        int a,b,c;

//C variable 
    public:
        int d,e;

        void setData(int ,int ,int,int );//Function Declaration

        void getData(){

            cout<<"Value Of A "<<a<<endl;
            cout<<"Value Of B "<<b<<endl;
            cout<<"Value Of C "<<c<<endl;
            cout<<"Value Of D "<<d<<endl;
            cout<<"Value Of E "<<e<<endl;
            cout<<"Value Of N "<<n<<endl;
        }
};

void Employee :: setData(int a1,int b1,int c1,int n1){

    a=a1;
    b=b1;
    c=c1;
    n=n1;
}


int main(){

    Employee kunj;

    kunj.d=34;
    kunj.e=21;

    kunj.setData(1,2,3,4);

    kunj.getData();






return 0;
}