#include <iostream>
using namespace std;

int main()
{
    int a=0, b=1, c=0, i, terms;

    cout<<"Enter number of terms: "<<endl;
    cin>>terms;

  
cout<<("Fibonacci terms: ")<<endl;

    for (i = 1; i <= terms; i++)
    {
        cout<<c;

        a = b;
        b = c;
        c = a + b;
        
    }

    return 0;
}