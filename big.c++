//wap to find greatest no.b/w 2 no.'s
#include<iostream>
using namespace std;
int main()

{
    int a,b, max;
    printf("enter the values of a and b ");
    scanf("%d%d",&a,&b);
    (a>b)?(max=a):(max=b);
    printf("biggest value =%d",max);
  
  return 0;
}