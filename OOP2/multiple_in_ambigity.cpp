#include<bits/stdc++.h>
using namespace std;

class A
{

public :

    void display()
    {
        cout<<"This is A class"<<endl;
    }
};

class B
{

public :

    void display()
    {
        cout<<"This is class B"<<endl;
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
