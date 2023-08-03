// Take 2 numbers as input and print the large number.

#include<iostream>
using namespace std;
int main()
{
    int num1,num2,sum;

    cout<<"Enter two number: ";
    cin>>num1>>num2;

    if (num1>num2)
        cout<<"lage number is "<<num1;
    else
        cout<<"large number is "<<num2;

    return 0;
}
