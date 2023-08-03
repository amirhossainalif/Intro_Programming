/*
* * * * *
* * * *
* * *
* *
*

*/




#include <iostream>
using namespace std;

int main()
{
    int row, col, num;

    cout << "Enter number of lines: ";
    cin >> num;

    for(row=num; row>=1; row--)
    {
        for(col = row; col >=1; col--)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}


