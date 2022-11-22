#include<iostream>

using namespace std;

class Box{
    public:
    int height;
    int length;
    int width;
};

int main(){
    int height;
    int length;
    int width;

    int volume=0;
    Box box1;
    Box box2;
    box1.height=21;
    box1.length=23;
    box1.width=47;

    volume=box1.height * box1.length * box1.width;

    cout<<"Volume Is: "<<volume;
}