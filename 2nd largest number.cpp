#include<iostream>
using namespace std;
int main()
{
    int n, i, num[50], large, sec;

     cout<<"Enter number of elements: ";
      cin>>n;

   for(i=0; i<n; i++)

     {
       cout<<"Enter Array Element"<<(i+1)<<": ";
        cin>>num[i];
     }

   if(num[0]<num[1])

    {
      large = num[1];
      sec = num[0];
    }

   else

    {
      large = num[0];
      sec = num[1];
    }

   for (i = 2; i< n ; i ++)

  {

      if (num[i] > large)

      {
         sec = large;
         large = num[i];
      }

      else if (num[i] > sec && num[i] != large)

       {
         sec = num[i];
       }

   }

    cout<<"Second Largest : "<<sec;

    return 0;
}
