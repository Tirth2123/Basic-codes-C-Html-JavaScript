#include <iostream>
#include<string>
using namespace std;
class item
{
    public:
    int item_code;
    string item_name;
    int cost,discount;
    void item1()
    {
        cout<<"enter item code"<<endl;
        cin>>item_code;
        cout<<"enter name of item"<<endl;
        cin>>item_name;
        cout<<"enter cost of item"<<endl;
        cin>>cost;
        cout<<"enter discount"<<endl;
        cin>>discount;
    }
    int get_price()
    {
        return cost-discount;
    }
    
};
class customer: public item
{
    public:
    string customer_name;
    int amount;
    
    customer()
    {
        cout<<"enter customer name"<<endl;
        cin>>customer_name;
        cout<<"enter number of items"<<endl;
        cin>>amount;
    }
    void payable()
    {
        cout<<"Mr./Mrs."<<customer_name<<endl;
        cout<<"you have to pay"<<endl;
        cout<<get_price();
    }
};
class employee:public item
{
    public:
    int employee_code;
    string employee_name;
    int amount;
    
    employee()
    {
        cout<<"enter employee code"<<endl;
        cin>>employee_code;
        cout<<"enter name of employee"<<endl;
        cin>>employee_name;
        cout<<"enter number of items"<<endl;
        cin>>amount;
    }
};
int main() {
    customer c;
    employee e;
    c.item1();
    c.payable();
return 0;
}