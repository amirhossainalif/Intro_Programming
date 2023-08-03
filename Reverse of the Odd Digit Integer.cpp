//Reverse an Integer Number that will only contain the Odd digits.

#include<iostream>
 using namespace std;

  int main()

 {
    int num, rem, rev, sum =0;

      cout<< "Enter an Integer Number: ";
        cin>> num;

      rev= num;

    while(rev!=0)
    {
        rem= rev%10;
          rev= rev/10;

        if(rem%2!=0 )
        {
            sum= sum*10+rem;
        }

    }


     cout<< "Reverse of the Odd Digit Integer: "<< sum;

    return 0;

 }
