#include<bits/stdc++.h>
using namespace std;

class A // base class
{

public :
    void A_print()
    {

        cout<<"A class"<<endl;
    }
};

class B : public A
{

public :
    void B_print()
    {
        cout<<"B class"<<endl;
    }
};

class C
{

public :

    void C_print()
    {

        cout<<"C class"<<endl;

    }
};

class D : public B,public C

{

public :
   void D_print()
   {

       cout<<"class D"<<endl;
   }
};

int main()

{

     D obj;

    obj.A_print();
    obj.B_print();
    obj.C_print();
    obj.D_print();
}
