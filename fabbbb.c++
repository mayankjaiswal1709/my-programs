#include <iostream>
using namespace std;

int main()
{
    int n,t1=0,t2=1,next=0,i;

    cout<<"Enter number of terms: "<<endl;
    cin>>n;



cout<<("Fibonacci terms: ")<<endl;

    for (i = 1; i <=n; i++)
    {
        if(i==1)
        {
        cout<<","<<t1 ;
        continue;
        }
        next=t1+t2;
        t1=t2;
        t2=next;
        cout<<next<<",";

    }

    return 0;
}