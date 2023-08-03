//find the Greatest Common Divisor (GCD) of two numbers


#include <iostream>
using namespace std;

int main()
{
    int num1,num2,i,gcd;

    cout<<"Input the first number: ";
    cin>>num1;

    cout<<"Input the second number: ";
    cin>>num2;

    for(i=1; num1>=i && num2>=i; i++)
    {
        if(num1%i==0 && num2%i== 0)
        {
            gcd=i;
        }
    }
    cout<<"The Greatest Common Divisor is: "<<gcd<<endl;

    return 0;
}
