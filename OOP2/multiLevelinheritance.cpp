#include<bits/stdc++.h>

using namespace std;

class Animal
{

public:

    void sleep()
    {

       cout<<"Sleeping";
    }
};

class tiger : public Animal
{

public :

    void eat()
    {

        cout<<"Eating meet";
    }
};

class babyTiger : public tiger
{

public :

    void weight()
    {

        cout<<"baby tiger weight is 100 kg";
    }
};
double
int main()

{

    babyTiger obj;
    obj.sleep();
    obj.eat();
    obj.weight();
}
