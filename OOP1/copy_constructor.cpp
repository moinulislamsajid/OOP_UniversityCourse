#include<bits/stdc++.h>
using namespace std;

class copy_cons
{

private :

    int a,b;

public :

    copy_cons()
    {
        a = 20;
        b = 30;
    }

    copy_cons(copy_cons &c)
    {

        a = c.a;
        b = c.b;
    }
    void display()
    {
        cout<<"A : "<<a<<"B : "<<b<<endl;
    }


};

int main()
{

    copy_cons obj;
    obj.display();

    copy_cons obj1(obj);
    obj1.display();
}
