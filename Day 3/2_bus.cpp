#include<iostream>
using namespace std;
class busdriver
{
public:
    string holder_name;
    int ac_no;
    busdriver(string name,int bus_no)
    {
        cout<<"constructor is called automatically"<<endl;
        this->holder_name=name;
        this->bus_no=bus_no;
    }
    void display()
    {
        cout<<"busdriver:"<<this->busdriver_name<<endl;
        cout<<"bus number:"<<bus_no<<endl;
    }
};
int main()
{
    busdriver b1("pavan",101);
    b1.display();
    return 0;
}