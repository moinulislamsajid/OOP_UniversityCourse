#include<bits/stdc++.h>
using namespace std;

class A
{
protected :

    int a;

public :

    void get_a(int n)
    {
        a = n;
    }
};

class B
{
protected:

    int b;

public:

    void get_b(int n)
    {
        b = n;
    }
};

class C : public A, public B
{
public :

    void display()
    {
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<a+b;

    }

};

int main()
{
    C c;
    c.get_a(10);
    c.get_b(20);
    c.display();
}
