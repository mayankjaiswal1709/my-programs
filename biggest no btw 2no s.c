#include<stdio.h>

int main()
{
    int a,b, max;
    printf("enter the values of a and b ");
    scanf("%d%d",&a,&b);
    (a>b)?(max=a):(max=b);
    printf("biggest value =%d",max);
    return 0;

}