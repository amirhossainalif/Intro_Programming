//pattern
/*
1
1 2
1 2 3
1 2 3 4
*/



#include<iostream>
using namespace std;
int main()
{
    int num, col, row;

    cout << "Enter number of lines: ";
    cin >> num;

    for(row=1; row<=num; row++)
    {
        for(col=1; col<=row; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;

}
