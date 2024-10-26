#include<bits/stdc++.h>

using namespace std;

class First
{

public :

    void first_print()
    {
        cout<<"Base class"<<endl;
    }
};

class A : public First

{

public :

    void A_print()
    {

        cout<<"A is print"<<endl;
    }


};

class B : public First
{

public :

    void B_print()

    {

        cout<<"B class is print"<<endl;
    }
};

int main()
{


    A obj;
    obj.first_print();
    obj.A_print();

    B obj1;

    obj1.B_print();
}
