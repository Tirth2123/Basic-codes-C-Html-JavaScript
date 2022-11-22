#include<iostream>
using namespace std; 


class A{

    public:

    int a,b;

    void fun(int x){

        a=x;
        cout<<"This is your first Function";
}
    void fun(int x,int y){

        a=x;
        b=y;
        cout<<"This is your Second Function";

    }
    void fun(){
        cout<<"Hey I am Default Function";
    }
};

int main(){

    A a;
    a.fun();
    
return 0;
}