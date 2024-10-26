#include<bits/stdc++.h>
using namespace std;

class First
{
public:

    void Print_first()
    {
         cout<<"Hello print First"<<endl;
    }

};

class A : public First
{

public:

    void print_A()
    {
        cout<<"Print A Class"<<endl;
    }
};

class B : public First
{
public :

    void display()
    {
        cout<<"THis is print B class"<<endl;
    }
};

int main()
{


    A a;
    a.Print_first();
    a.print_A();

    B b;
    b.display();
}
