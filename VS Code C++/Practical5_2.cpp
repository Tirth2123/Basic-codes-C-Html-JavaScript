#include<iostream>
using namespace std;

class  Function
{
    float val1,val2;

   public:
        void get()
        {
           cout<<"\nEnter 1st value: ";
           cin>>val1;
           cout<<"\nEnter 2nd value: ";
           cin>>val2;
        }

        friend float mean(Function ob);
};

float mean(Function ob)
{
   return float(ob.val1+ob.val2)/2;
}

int main()
{


    Function obj;
    obj.get();
    cout<<"\nMean value is :: "<<mean(obj)<<"\n";

    return 0;
}
