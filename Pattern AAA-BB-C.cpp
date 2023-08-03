/*

A A A A
B B B
C C
D
*/




#include <iostream>
using namespace std;

 int main()

 {
    int row, num, col;

    char alphabet = 'A';

       cout << "Enter the number of line: ";
        cin >> num;


        for (row=num; row>= 1; row--)

        {
            for (col =1; col <=row; col++)


               cout << alphabet << " ";

              alphabet++;

            cout << endl;

      }
    return 0;
}

