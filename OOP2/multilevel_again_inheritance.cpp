#include<bits/stdc++.h>
using namespace std;

class Animal
{
public :

    void eat()
    {
        cout<<"Eating===="<<endl;
    }
};

class Dog : public Animal
{
public :

    void dog()
    {
        cout<<"this is my favorite "<<endl;
    }
};

class babyDog : public Dog
{

public :

    void heBeat()
    {
        cout<<"THe rest of peace 2019"<<endl;
    }

};

int main()
{
    babyDog b;
    b.eat();
    b.dog();
    b.heBeat();
}
