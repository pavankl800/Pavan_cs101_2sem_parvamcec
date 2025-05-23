#include<iostream>
using namespace std;
int add(int num1,int num2);
void sub(int num1,int num2);
int mul();
int div();
int main(){
    int a=0;
    int b=0;
    cout<<"enter two numbers:"<<endl;
    cin>>a>>b;
    int res=add(a,b);
    cout<<"type2:"<<res<<endl;
    sub(a,b);
    int res1=mul();
    
    int c=20;
    int d=40;
    int res1=add(c,d);
    cout<<"the result2 is:"<<res1<<endl;
}
int add(int num1,int num2)
{
    int sum = num1+num2;
    return sum;
}