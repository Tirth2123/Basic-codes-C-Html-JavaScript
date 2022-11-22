#include<iostream>
using namespace std;

class Example{
    private:
    int a;
    public:
    Example(){
        a=0;
    }
    friend class B;
};
class B{
    private: 
    int b;
    public:
    void showA(Example& x){
        cout<<"A::a"<<x.a;
    }
};

int main(){
    Example a;
    B b;
    b.showA(a);
}