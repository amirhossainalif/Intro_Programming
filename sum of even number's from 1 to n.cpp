// 2+4+8+............+n (sum of even number's from 1 to n)


#include<iostream>
using namespace std;

int main()
{
    int num, i, sum=0;

    cout<<"enter a number: ";
    cin>>num;

    for(i=0;i<=num;i+=2)
    {
        sum=sum+i;
    }
    cout<<sum;


    return 0;
}
