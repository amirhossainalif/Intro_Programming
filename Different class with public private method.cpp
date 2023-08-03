#include<iostream>
using namespace std;

class student
{
    private:
        string phone_number;
        string address;

    public:
        int roll;
        string name;

        void data(string a,string b)
        {
            phone_number=a;
            address=b;
        }

        void display()
        {
            cout<<"Roll Number:"<<roll<<endl;
            cout<<"Phone Number:"<<phone_number<<endl;
            cout<<"Address:"<<address<<endl<<endl;
        }
};
int main()
{
    student x,y;
    x.name="sam";
    cout<<"Name:"<<x.name<<endl;
    x.roll=118;
    x.data("01234567890","Dhaka, Bangladesh");
    x.display();

    cout<<endl;

    y.name="john";
    cout<<"Name:"<<y.name<<endl;
    y.roll=133;
    y.data("01234567899","Dhaka, Bangladesh");
    y.display();

    return 0;
}
