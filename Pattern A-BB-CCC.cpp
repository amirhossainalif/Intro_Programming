/*
A
B B
C C C
D D D D
*/


#include <iostream>
using namespace std;

int main()

{
    int num,row,col;

    char alphabet = 'A';

    cout<<"Enter the number of lines: ";
    cin>>num;

    for(row=1; row<=num; row++)

    {
        for(col=1; col<=row; col++)

            cout<<alphabet<<" ";

        alphabet++;


        cout<<endl;

    }



    return 0;
}
