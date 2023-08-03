#include <iostream>
using namespace std;

class Rectangle
{

    private:

        int Length;
        int Breadth;

    public:

        void setLength(int length)
        {
            Length=length;
        }

        int getLength()
        {
            return Length;
        }

        void setBreadth(int breadth)
        {
            Breadth=breadth;
        }

        int getBreadth()
        {
            return Breadth;
        }

        void returnArea()
        {
            int result=Length * Breadth;
            cout<<"rectangle = "<<result;
        }

};


int main()
{
    int l,b;

    cout<<"enter length: ";
    cin>>l;

    cout<<"enter breadth: ";
    cin>>b;

    Rectangle area;
    area.setBreadth(b);
    area.setLength(l);


    area.returnArea();


}
