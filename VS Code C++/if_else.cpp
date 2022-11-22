#include <iostream>

using namespace std;

int main()
{


    // cout<<"Hello There Welcome to control structure series"<<endl;

    // cout<<"Your next Structure is Selection Structure"<<endl;

    // cout<<"Your next Structure is Loop Structure"<<endl;

    //Selection Structure

    //if else statement

    //if-else
    //if(condition)
    //{
        //C++ Code   
    //}
    // int age;
    // cout<<"Enter Your Age";
    // cin>>age;

    // if(age<18 && age>1){

    //     cout<<"You are kid";

    // }
    // else if(age==0){
    //     cout<<"You are not born yet";
    // }
    // else{

    //     cout<<"you are Young";
    // }

    //if-else-if-else

    // switch case statement

    // Syntax
    // switch(expression)
    // case 1:
    // {
    // action
    // }
    // case 2:
    // {
    // action
    // }

    //default

    //SWITCH

    int age;
    cout << "Enter Your age(Only 18,19,20)";
    cin >> age;
    switch (age)
    {
    case 18:
        cout << "You are 18" << endl;
       break;

    case 19:
        cout << "you are 19" << endl;
        break;
    case 20:
        cout << "You are 20" << endl;
        break;
    default:
        cout << "Entered Wrong age"<<endl;
        break;
    }
    cout << "Done With Switch Case";
    return 0;
}