#include<bits/stdc++.h>
using namespace std;

class encap
{
private :

    double length;
    double width;

    void upArea()
    {
        area = length * width;
    }
    void upPerimeter()
    {
        perimeter = 2 * (length + width);
    }
public :
    double area;
    double perimeter;

    encap(double len, double wid)
    {
        length = len;
        width = wid;

        upArea();
        upPerimeter();
    }

    double getlength()
    {
        return length;
    }
    double getwidth()
    {
        return width;
    }

    void setLength(double len)
    {
        length = len;
        upArea();
        upPerimeter();
    }

    void setWidth(double wid)
    {

        width = wid;
        upArea();
        upPerimeter();
    }

};

int main()
{
    encap e(5.6,24.45);


    cout<<"Initial Value : "<<endl;
    cout<<"Length : "<<e.getlength()<<endl;
    cout<<"Width : "<<e.getwidth()<<endl;
    cout<<"Area : "<<e.area<<endl;
    cout<<"Perimeter : "<<e.perimeter<<endl;

    cout<<"======================="<<endl;

    e.setLength(9.9);
    e.setWidth(4.6);
    cout<<"Initial Value : "<<endl;
    cout<<"Length : "<<e.getlength()<<endl;
    cout<<"Width : "<<e.getwidth()<<endl;
    cout<<"Area : "<<e.area<<endl;
    cout<<"Perimeter : "<<e.perimeter<<endl;

}
