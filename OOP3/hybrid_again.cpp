#include<bits/stdc++.h>
using namespace std;

class A
{

public:

    void A_print()
    {
        cout<<"A is class"<<endl;
    }

};

class B : public A

{
public :

    void B_print()
    {
        cout<<"B is class"<<endl;
    }
};

class C

{
public:

    void C_print()
    {
        cout<<"C is class"<<endl;
    }
};

class D : public B, public C
{
    public:

    void D_print()
    {
        cout<<"D is class"<<endl;
    }
};


int main()
{
    D d;
    d.A_print();
    d.B_print();
    d.C_print();
    d.D_print();
}
