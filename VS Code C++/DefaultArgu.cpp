#include<iostream>
using namespace std;

int add(int a=21, int b=23, int c=51){
    int sum;
    sum = a+b+c;
}

int main(){
    cout<<add();
    cout<<"\n"<<add(20,30);
}