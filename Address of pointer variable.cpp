#include<iostream>
using namespace std;
int main()
{
    int num;

    cout<<"enter the value: ";
    cin>>num;

    int *x;
    x=&num;

    cout<<"Address of pointer variable: "<<&x<<endl;

    return 0;
}
