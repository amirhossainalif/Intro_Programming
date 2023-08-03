#include <iostream>
using namespace std;


class Employee
{
    private:
        string Name;
        int Year_Of_Joining;
        string Address;

    public:
        void setName(string name)
        {
            Name=name;
        }
        string getName()
        {
            return Name;
        }

        void setYear_Of_Joining(int year_Of_Joining)
        {
            Year_Of_Joining=year_Of_Joining;
        }

        int getYear_Of_Joining()
        {
            return Year_Of_Joining;
        }

        void setAddress(string address)
        {
            Address=address;
        }

        string getAddress()
        {
            return Address;
        }

        void ShowInformation()
        {
            cout<<"Name"<<"\t"<<" Year of joining \t"<<"Address"<<"\n"<<endl;
        }

        void EmployeeInformation()
        {
            cout<<Name<<"\t"<<Year_Of_Joining<<"\t"<<Address<<"\n"<<endl;
        }

        Employee(string name,int year_Of_Joining, string address )
        {
            Name=name;
            Year_Of_Joining=year_Of_Joining;
            Address=address;
        }

};

int main()
{
    Employee employee1= Employee("Robert",1994," 64C- WallsStreat ");
    Employee employee2= Employee("Sam",2000,"68D- WallsStreat ");
    Employee employee3= Employee("John",1999," 26B- WallsStreat ");

    employee1.ShowInformation();
    employee1.EmployeeInformation();
    employee2.EmployeeInformation();
    employee3.EmployeeInformation();

}
