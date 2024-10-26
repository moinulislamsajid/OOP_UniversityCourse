#include<bits/stdc++.h>
using namespace std;

class Hello
{

private :

    int num;

public :

    // create a constructor to initial the value

    Hello()
    {
        num = 0;
    }

    friend int print(Hello v);
};


int print(Hello c)
{
    c.num = 30000;
    return c.num;
}

int main()
{

    Hello h;
    cout<<print(h)<<endl;
}
