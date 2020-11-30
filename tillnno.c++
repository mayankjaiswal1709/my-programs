#include <iostream>
using namespace std;
int main()
{
    int i, n;

  
cout<<"enter any number:";
cin>>n;
   printf("Natural numbers from 1 to %d : \n", n);

    for(i=1; i<=n; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}