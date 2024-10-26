#include<bits/stdc++.h>
using namespace std;

class Animal
{

public:

    void eat()
    {
        cout<<"Eating"<<endl;
    }
};

class dog : public Animal
{

public :

    void eat()
    {
        cout<<"Playing"<<endl;
    }
};

int main()
{

    dog d = dog();
    d.eat();
}
