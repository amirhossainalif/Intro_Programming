/*
1
2 2
3 3 3
4 4 4 4
*/



#include <iostream>
using namespace std;

int main()

{
    int row,col,num, n;

    cout<<"Enter the number lines : ";
    cin>>n;


    if(n>0)

    {

        for(row=0; row<=n; row++)

        {
            for(col=1; col<=row; col++)

                cout<<num<<" ";

            num++;

            cout<<endl;

        }

    }

    return 0;
}

