#include<bits/stdc++.h>
using namespace std;

class B
{

public :

    int value;

    B()
    {
        value = 0;
    }

    B(int val)
    {

        value = val;
    }

    // logic for operation

    B operator +(const B& other) const
    {

        return B(this->value + other.value);
    }

    void display()
    {
        cout<<"Value is "<<value<<endl;
    }
};

int main()
{

    B b1(10),b2(29),c;
    c = b1 + b2;
    c.display();




}
