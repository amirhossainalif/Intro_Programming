// Input a digit from user and print if the number is positive or negative.

#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;

    cout<<"Enter number: ";
    cin>>num;

    if (num>=0)
        cout<<"Number positive ";
      else if (num<=0)
         cout<<"Number Negative ";
        else
            cout<<"number is 0";

    return 0;
}
