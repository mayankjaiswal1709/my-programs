#include<iostream>
using namespace std;

struct Student
{
    private:
        int rNo;
        float perc;
    public:

        void read()
        {
            cout<<"Enter roll number: ";
            cin>>rNo;
            cout<<"Enter percentage: ";
            cin>>perc;
        }

        void print()
        {
            cout<<endl;
            cout<<"Roll number: "<<rNo<<endl;
            cout<<"Pecentage: "<<perc<<"%"<<endl;
        }
};

int main()
{
    struct Student std;
    std.read();
    std.print();
}
