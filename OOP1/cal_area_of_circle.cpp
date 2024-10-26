#include<bits/stdc++.h>
using namespace std;

class circle
{

private:

    double radius,area;

public:

    void set_Data(double r)
    {
        radius = r;
    }
    void cal()
    {
        area = 3.1416 * radius * radius;
    }

    void display()
    {
        cout<<"Radius : "<<area;
    }

};

int main()
{
    double r;
    cin>>r;

    circle c;
    c.set_Data(r);
    c.cal();
    c.display();

}
