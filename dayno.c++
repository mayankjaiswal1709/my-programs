#include<iostream>
using namespace std;
int main()
{
int week;
cout<<"enter your day number (1-7)";
scanf("%d",&week);
switch(week)
{
case 1:cout<<"monday"<<endl;
break;

case 2:cout<<"tuesday"<<endl;
break;

case 3:cout<<"wednesday"<<endl;
break;

case 4:cout<<"thrusday"<<endl;
break;

case 5:cout<<"friday"<<endl;
break;

case 6:cout<<"saturday"<<endl;
break;

case 7:cout<<"sunday"<<endl;
break;
default: cout << "invalid operation.. please enter number between (1-7)" <<endl;

}


return 0;

}

