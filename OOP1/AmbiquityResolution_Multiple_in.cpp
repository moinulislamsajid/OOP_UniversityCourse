#include<bits/stdc++.h>
using namespace std;

class A
{
    public :
    void display()
    {
        cout<<"This class A"<<endl;
    }
};

class B
{
public :

    void display()
    {
        cout<<"This class B"<<endl;
    }
};

class C : public A,public B
{
public :

    void view()
    {
        A::display(); // this is problem
        B::display();
    }
};
int main()
{
    C c;
    c.view();
}
