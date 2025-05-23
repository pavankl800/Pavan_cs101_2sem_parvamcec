#include<iostream>
using namespace std;
class student(){
    private:
    student::string name;
    int roll_num;
    std::string class_name;
    int marks;
public:
    student(student::string name,int roll_num,student::string class_name,int marks):name(name),roll_num(roll_num),class_name(class_name),marks(marks)
}