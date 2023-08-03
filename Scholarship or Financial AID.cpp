//take user input for CGPA, Number of grade lower than B+ and Number of course drop

#include <iostream>
using namespace std;

int main()
{

    int  glow , drop ;
    float cgpa;

    cout<<"CGPA: ";
    cin>>cgpa;

    cout<<"Number of Grade lower than B+: ";
    cin>> glow;

    cout<<"Number of Course Drop: ";
    cin>>drop;

    if(cgpa >=3.75 && glow==0 && drop==0){
        cout << "You are Applicable for 45% Scholarship" << endl;
    }

    else if(cgpa >=3.65 && glow==0 && drop<=1){
        cout << "You are Applicable for 20% Financial Aid" << endl;
    }

    else if(cgpa >=3.5 && glow >=1 && drop <=3){
        cout << "You are Applicable for 10% Financial Aid" << endl;
    }

    else {
        cout << "You are not Applicable for Scholarship or Financial AID" << endl;
    }

	return 0;
}
