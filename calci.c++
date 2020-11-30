#include<iostream>
using namespace std;
int main()
{
int a,b,res;
char op;
cout<<"enter your value of a and b";
cin>>a>>b;
cout<<"enter operation code";
cin>>op;
switch(op)
{
case '+':res=a+b;
cout<<"addition="<<res<<endl;
case '-':res=a-b;
cout<<"subtraction="<<res<<endl;
case '*':res=a*b;
cout<<"multipliction="<<res<<endl;
case '%':res=a%b;
cout<<"division="<<res<<endl;
case '/':res=a/b;
cout<<"moldule="<<res<<endl;
default: cout<< "invalid operation ! " <<endl;



}


return 0;

}