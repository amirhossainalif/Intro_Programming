#include<iostream>
using namespace std;


class Box
{
    public:

        double volume;
        double length;
        double height;

    private:

        double breadth;

    public:

      void setvalue( double l, double b, double h )


    {
        length =l;
        breadth=b;
        height=h;
    }

    double getvalue()
    {
        double volume=(length*breadth* height) ;

        return volume;
    }
};


int main()

{
    double  l,b,h;

    Box value;

    cout<<" Input the length of box: =";
    cin>>l;
    cout<<" Input the breadth of box: =";
    cin>>b;
    cout<<" Input the height of box: =";
    cin>>h;

    value.setvalue(l,b,h);
    cout<<endl;

    cout<<" The volume of box : = "<< value.getvalue()<<endl;


    return 0;
}
