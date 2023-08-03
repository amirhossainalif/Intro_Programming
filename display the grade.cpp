// Input a student's mark and display the grade.

#include<iostream>
using namespace std;
int main()
{
    int num;

    cout<<"Enter your mark: ";
    cin>>num;

    if(num>=90)
    {
        cout<<"Letter Grade= 'A+'";
    }
    else if(num>=85)
    {
        cout<<"Letter Grade= 'A'";
    }
    else if(num>=80)
    {
        cout<<"Letter Grade= 'B+'";
    }
    else if(num>=75)
    {
        cout<<"Letter Grade= 'B'";
    }
    else if(num>=70)
    {
        cout<<"Letter Grade= 'C+'";
    }
    else if(num>=65)
    {
        cout<<"Letter Grade= 'C'";
    }
    else if(num>=60)
    {
        cout<<"Letter Grade= 'D+'";
    }
    else if(num>=50)
    {
        cout<<"Letter Grade= 'D'";
    }
    else
    {
        cout<<"Letter Grade= 'F' (Failed)"<<endl;
    }

    return 0;
}
