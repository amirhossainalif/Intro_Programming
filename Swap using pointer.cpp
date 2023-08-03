#include<iostream>
using namespace std;
int main(){

     int x = 5, y = 10, *j = &x, *k = &y, z ;

     cout<<" x = "<<x<<endl;
     cout<<" y= "<<y<<endl<<endl;

      z=*j;
     *j=*k;
     *k=z;

     cout<<"After swapping  "<<endl;
     cout<<" x = "<<*j<<endl;
     cout<<" y= "<<*k<<endl;

     return 0;

}
