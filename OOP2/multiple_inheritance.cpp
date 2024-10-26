#include<bits/stdc++.h>

using namespace std;

class A
{

public :

    void A_print()
    {

        cout<<"First base class"<<endl;
    }
};

class B
{

 public :

    void B_print()
    {

       cout<<"Second base class"<<endl;
    }

};

class c : public A,public B
{


public :


    void c_print()
    {

        cout<<"one derived class";
    }
};

int main()

{

    c obj;
    obj.A_print();
    obj.B_print();
    obj.c_print();
}
