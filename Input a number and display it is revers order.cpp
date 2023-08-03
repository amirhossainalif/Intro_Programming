// Input a number and display it is revers order.


#include<iostream>
using namespace std;

int main()
{
    int num, rev=0, r;

    cout<<"enter a number: ";
    cin>>num;

    while(num!=0)
    {
        r=num%10;
        rev=rev*10+r;
        num/=10;
    }
    cout<<"reversed number: "<<rev<<endl;

    return 0;
}

