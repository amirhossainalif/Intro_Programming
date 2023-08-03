
/*
A
A B
A B C
A B C D
*/


#include <iostream>
using namespace std;

int main()
{
    int num,col,row;

       cout << "Enter number of rows: ";
         cin>>row;

    for(num=1; num<=row; num++)

        {
           for(col=1; col<=num; col++)

           {
             cout<<((char)(col+64));
           }

         cout<< endl;

        }

    return 0;
}
