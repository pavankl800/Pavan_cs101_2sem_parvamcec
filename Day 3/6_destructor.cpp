#include<iostream>
using namespace std;
class parent{
    public:
    string name;
    parent(string name){
        cout<<"constructor called";
        this->name=name;
    } 
    void display()
    {
        cout<<"name of parent:"<<name<<endl;
    }
    ~parent(){
        cout<<"destructor called"<<endl;

    }
};
int main()
{
    parent p1("lingappa");
    p1.display();
    return 0;
}