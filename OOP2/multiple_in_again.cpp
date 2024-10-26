#include<bits/stdc++.h>
using namespace std;

class A
{
    protected:

    int a;

    public:

        void set_a(int n)
        {
            a = n;
        }
};

class B
{
    protected:

    int b;

    public:

        void set_b(int n)
        {
            b = n;
        }
};

class C : public A,public B
{
public :

    void display()
    {
        cout<<"a : "<<a<<endl;
        cout<<"b : "<<b<<endl;
        cout<<"addition : "<<a+b<<endl;
    }
};

int main()
{
    C c;
    c.set_a(10);
    c.set_b(20);
    c.display();
}
