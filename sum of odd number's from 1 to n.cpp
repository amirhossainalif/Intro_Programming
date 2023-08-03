// 1+3+5.......+n (sum of odd number's from 1 to n)

#include<iostream>
using namespace std;
int main()
{
    int num, i, s=0;

    cin>>num;

    for(i=1; i<=num; i+=2)
    {
        s=s+i;
    }

    cout<<"total= "<<s<<endl;

    return 0;

}
