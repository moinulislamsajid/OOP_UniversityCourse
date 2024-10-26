#include<bits/stdc++.h>
using namespace std;

class overload
{
private :
    int sum,area;

public :

    overload()
    {
         cout<<"THis is a first method of constructor overloading"<<endl;
    }

    overload(int r)
    {
        area = 3.1416 * r * r;
        cout<<"Radius is : "<<area<<endl;
    }
    overload(int x,int y)
    {
        sum = x + y;
        cout<<"Sum is :"<<sum<<endl;
    }
};

int main()
{

    overload ov;
    overload ov1(10);
    overload ov2(20,30);
}
