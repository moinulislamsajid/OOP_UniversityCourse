#include<bits/stdc++.h>
using namespace std;

class copY
{

private:

    int x,y;

public:

    copY()
    {
        x = 10;
        y = 20;
    }

    copY(copY &v)
    {
        x = v.x;
        y = v.y;
    }

    void display()
    {
        cout<<"X : "<<x<<endl;
        cout<<"Y : "<<y<<endl;
    }

};

int main()
{
    copY c;
    c.display();


    // now called the copy constructor

    copY v(c);
    v.display();


}
