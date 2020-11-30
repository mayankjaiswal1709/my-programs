#include<iostream>

using namespace std;

struct payslip

{
char name[20];
float basic,hra,da,pf,netsell;

void getdata()
{
cout<<"enter your name";
cin>> name;

cout<<"enter your salary";
cin>> basic;

}
void calnetsell()
{
hra=(basic*10)/100;
da=(basic*20)/100;
pf=(basic*5)/100;

 netsell=basic+hra+da-pf;
 cout<<"net= "<<netsell;
}
 
};
int main()
{
payslip obj;
obj.getdata();
obj.calnetsell();
}
