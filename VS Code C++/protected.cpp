#include<iostream>
using namespace std; 


class Base{

  
//It is working as  Private but it can be inherited
   private:
    int a=10;

    public:
    int setData(void);
    

};
int Base :: setData(void){

    return a;
}
class Derived : public Base{

    int e;
    public:
    void getData();

};

void Derived :: getData(){
    e=setData();
 
    cout<<e;
}


int main(){

    Derived d;

    d.getData();
    //Will not work since a is protected as both base as well as derived class
return 0;
}