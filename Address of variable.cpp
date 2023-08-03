
#include<iostream>
using namespace std;
int main()
{
    int num;

    cout<<"enter the value: ";
    cin>>num;


    int *x=&num;


    cout<<"Address of variable: "<<&num<<endl;

    return 0;
}
