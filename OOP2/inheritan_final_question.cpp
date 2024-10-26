#include<bits/stdc++.h>

using namespace std;

class A
{

public :

    void display()
    {
        cout<<"parent class"<<endl;
    }
};

class B

{
public :

    void display()
    {

        cout<<"This is A class"<<endl;
    }
};

class C : public A, public B

{

public :

    void view()
    {

        A::display(); // called to Ambiquity function
        B::display();
    }
};

int main()

{

    C c;
    c.view();
}
