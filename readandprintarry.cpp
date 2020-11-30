#include <iostream>


using namespace std;

int main()
{
    int numbers[5], i;

	cout<<"***********Read Array and Print Array In C++*************"<<endl;
	
	cout<<"---------------Reading Array with Position------------- : "<<endl;
    for (i = 0; i <5; i++)
    {
		cout<<"Enter the Number : "<< (i+1) <<"  : ";
        cin>>numbers[i];

        
    }

    cout<<"Printing Array:"<<endl;
    for (i = 0; i < 5; ++i)
    {
        cout<<numbers[i]<<endl;
    }
    
    return 0;
}