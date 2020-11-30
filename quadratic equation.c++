#include<iostream>
using namespace std;
int main()
{
float a,b,c,x1,x2,discriminant,realpart,imaginarypart;
cout<<"enter coefficent a,b and c";
cin>>a>>b>>c;
discriminant=b*b-4*a*c;

if(discriminant>0)
{
    x1=(-b+sqrt(discriminant))/(2*a);
    x2=(-b-sqrt(discriminant))/(2*a);

}

}