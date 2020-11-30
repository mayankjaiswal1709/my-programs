//wap to find greatest no.b/w 3 no.'s
#include<iostream>
using namespace std;
int main()

{
    int a,b,c, max;
    printf("enter the values of a , b and c ");
    scanf("%d%d%d",&a,&b,&c);
    (a>b)?((a>c)?(max=a):(max=c)):((b>c)?(max=b):(max=c));
    printf("biggest value =%d",max);
  
  return 0;
}