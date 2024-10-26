#include<bits/stdc++.h>
using namespace std;

class copy_cons
{
private :

    int a,b;

public :

    copy_cons()
    {
        a=20;
        b=10;
    }

    copy_cons(copy_cons &c)
    {
        a=c.a;
        b=c.b;
    }

    void display()
    {
        cout<<"A : "<<a<<" B : "<<b<<endl;
    }
};
int main()
{

    copy_cons ob;
    ob.display();

    copy_cons ob1;
    ob1.display();
}
