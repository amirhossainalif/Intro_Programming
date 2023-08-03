// Take a  student's course mark and display if the student has passed or failed.

#include<iostream>
using namespace std;
int main()
{
    int num=50, num1;

    cout<<"Course mark: ";
    cin>>num1;

    if (num<=num1)
        cout<<"Passed ";
    else
        cout<<"failed ";

    return 0;
}
