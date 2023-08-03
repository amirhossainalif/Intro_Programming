#include<iostream>
using namespace std;
int main()
{
    int x=5, y=10, z;

     cout<<" x = "<<x<<endl;
     cout<<" y = "<<y<<endl;
     cout<<endl;

     z=x;
     x=y;
     y=z;

     cout<<"After swapping: "<<endl;
     cout<<" x = "<<x<<endl;
     cout<<" y = "<<y<<endl;

    return 0;
}
