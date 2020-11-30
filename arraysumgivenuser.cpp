

#include <iostream>
using namespace std;
int main() 
{

   int a[1000],i,n,sum=0;

cout<<"enter the size of array :";
cin>>n;

cout<<"enter element in the array:",n;
for(i=0;i<n;i++)
{
    cin>>a[i];
      sum+=a[i];
}
      cout<<"sum of array elements are:"<<sum;
   return 0;
}