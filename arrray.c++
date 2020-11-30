#include<iostream>
using namespace std;
int main()
{
int a[1000],i,n;

cout<<"enter the size of array :";
scanf("%d",&n);

cout<<"enter element in the array:",n;
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
 printf(" \n elements in array are:");
 for(i=0;i<n;i++)
 {
     printf("%d",a[i]);
 }
return 0;

}