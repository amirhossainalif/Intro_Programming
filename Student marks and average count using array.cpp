#include<iostream>
using namespace std;
int main()
{
    int num, sum=0, min, max;
    float avg;
    cout<<"enter number of student's: ";
    cin>>num;

    int marks[num];

    for(int i=0; i<num; i++)
    {
        cout<<"enter student's marks: "<<i+1<<":";
        cin>>marks[i];
        sum=sum+marks[i];
    }
    cout<<"total marks: "<<sum<<endl;

    avg=(float) sum/num;
    cout<<"average is:"<<avg<<endl;


    return 0;
}
