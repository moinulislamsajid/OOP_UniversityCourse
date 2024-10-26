#include<bits/stdc++.h>
using namespace std;
class pub
{

public :

    double radius;

    double get_radius()
    {
        return 3.1416 * radius * radius;
    }
};

int main()
{
    pub p;
    p.radius = 5.5;

    cout<<"Radius is : "<<p.radius<<endl;
    cout<<"Area is : "<<p.get_radius()<<endl;

}
