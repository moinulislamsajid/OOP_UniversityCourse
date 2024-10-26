#include<bits/stdc++.h>
using namespace std;

class rectangle

{

private :

    double length;
    double width;


    void updateArea()
    {
        area = length * width;
    }

    void updatePerimeter()
    {
        perimeter = 2 * (length * width);
    }

public :

    double area;
    double perimeter;

    rectangle(double len, double wid)
    {

        length = len;
        width = wid;
        updateArea();
        updatePerimeter();
    }


    double get_length()
    {
        return length;
    }
    double get_width()
    {
        return width;
    }
    void set_length(double len)
    {
        length = len;
        updateArea();
        updatePerimeter();
    }
    void set_width(double wid)
    {

        width = wid;
        updateArea();
        updatePerimeter();
    }

};

int main()

{

    rectangle rec(3.5,9.6);

    cout<<"================== Initial Value ================"<<endl;
    cout<<"Length : "<<rec.get_length()<<endl;
    cout<<"Width : "<<rec.get_width()<<endl;
    cout<<"Area : "<<rec.area<<endl;
    cout<<"Perimeter : "<<rec.perimeter<<endl;

    rec.set_length(7.5);
    rec.set_width(7.5);

    cout<<"======================= Modify Value ==================="<<endl;
     cout<<"Length : "<<rec.get_length()<<endl;
    cout<<"Width : "<<rec.get_width()<<endl;
    cout<<"Area : "<<rec.area<<endl;
    cout<<"Perimeter : "<<rec.perimeter<<endl;

}
