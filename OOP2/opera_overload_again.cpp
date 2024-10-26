#include<bits/stdc++.h>
using namespace std;

class A
{
   public :

       int value;

    A()
    {
        value = 0;
    }

    A(int val)
    {

        value = val;

    }

    A operator +(const A& other)
    {

        return A(this->value + other.value);
    }

    void display()
    {

        cout<<value<<endl;
    }

};

int main()
{

    A a1(10),b1(20),c1;
    c1 = a1 + b1;
    c1.display();
}
