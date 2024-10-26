#include<bits/stdc++.h>
using namespace std;

class Test
{

private :

    int num;

public :

    Test()
    {

        num = 8;
    }

    // for operator overloading

    void operator ++()
    {

        num = num +2;
    }

    void display()

    {

        cout<<"the result is : "<<num;
    }
};

int main()
{

    Test t1;
    ++ t1; // called the function
    t1.display();
    return 0;
}
