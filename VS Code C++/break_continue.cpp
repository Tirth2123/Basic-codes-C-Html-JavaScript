#include<iostream>
using namespace std; 

int main(){
    for (int i = 0; i < 10; i++)
    {   
        if(i==3){
            continue;
            //Instead of break we can use continue
            //Difference Between Break and Continue is it will skip that number 
        }
        cout<<i<<endl;

    }
    
return 0;
}