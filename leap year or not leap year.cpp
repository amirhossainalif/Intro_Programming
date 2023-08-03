// Input any year from user and display if the year is leap year or not leap year.

#include<iostream>
using namespace std;
int main()
{
    int y;

    cout<<"Enter a year: ";
    cin>>y;
/*
      if year div by 400 or year not div by 4 and not div 100
*/
    if((y%400==0)||(y%4==0)&&(y%100!=0))
    {
        cout<<"Leap year "<<y;
    }
    else
        cout<<"Not leap year "<<y;

    return 0;
}
