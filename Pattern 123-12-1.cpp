/*
1 2 3 4
1 2 3
1 2
1
*/




#include <iostream>
using namespace std;

int main()
{
    int num, col, row;

    cout << "Enter number of lines: ";
    cin >> row;

    for(num=row; num >= 1; --num)
    {
        for(col = 1; col <= num; ++col)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;

}
