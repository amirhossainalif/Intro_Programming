//fibonacci series

#include <iostream>
using namespace std;

int main()
{
    int num, first=0, second=1, fibonacci, i;

    cout << "Enter the number: ";
    cin >> num;

    for (i = 0; i <= num; i++)
        {
            cout<<first<<endl;
            fibonacci=first+second;
            first=second;
            second=fibonacci;
        }

    return 0;
}
