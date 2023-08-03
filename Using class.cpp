#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int id;

};


int main()
{
    Student s1;

    s1.name= "John";
    s1.id=2222;

    cout<<"Student Name: "<<s1.name<<endl;

    cout<<"ID: "<<s1.id<<endl;

}
