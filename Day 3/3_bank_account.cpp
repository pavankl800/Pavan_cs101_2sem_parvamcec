#include<iostream>
using namespace std;
class bankAccount
{
public:
    string holder_name;
    int ac_no;
    bankAccount(string name,int ac_no)
    {
        cout<<"constructor is called automatically"<<endl;
        this->holder_name=name;
        this->ac_no=ac_no;
    }
    void display()
    {
        cout<<"holder name:"<<this->holder_name<<endl;
        cout<<"account number:"<<ac_no<<endl;
    }
};
int main()
{
    bankAccount b1("pavan",101);
    b1.display();
    return 0;
}