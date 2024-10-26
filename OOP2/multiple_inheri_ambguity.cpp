#include<bits/stdc++.h>
using namespace std;

class A
{
public:

    void display()
    {

        cout<<"print A_class"<<endl;

    }
};
class B
{
public:

    void display()
    {

        cout<<"print B_class"<<endl;

    }
};

class C : public A,public B
{
    public:

    void view()
    {
        A::display();
        B::display();
    }
};

int main()
{

    C c;
    c.view();


}
