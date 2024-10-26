#include<bits/stdc++.h>
using namespace std;

class cons
{
private :

    int sum,radius;

public :

    cons()
    {
        cout<<"THis is default constructor"<<endl;
    }
    cons(int r)
    {
        radius = 3.1416 * r * r;
        cout<<"Radius is : "<<radius<<endl;
    }
    cons(int x, int y)
    {
        sum  = x + y;
        cout<<"Summation is : "<<sum<<endl;
    }


};

int main()
{

    cons ob;
    cons ob1(10);
    cons ob2(10,20);

}
