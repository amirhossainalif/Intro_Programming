#include<iostream>
using namespace std;
int main()
{
    int array[5], i;

    cout<<"enter 5 array: ";

    for(i=0; i<5; i++)
        cin>>array[i];
    cout<<"reverse: "<<endl;
    for(i=(5-1); i>=0;i--)
        cout<<array[i]<<" ";


    return 0;
}
