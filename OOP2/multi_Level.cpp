#include<bits/stdc++.h>
using namespace std;

class Animal
{
public :

    void eat()
    {
        cout<<"Eating-------"<<endl;
    }
};

class Dog : public Animal

{
public:

    void doi()
    {
        cout<<"Dog is my favorite Pet"<<endl;
    }
};

class babyDog : public Dog{

public :

    void hey()
    {
        cout<<"Hello Baby dog"<<endl;
    }


};

 int main()
 {

     babyDog bb;
     bb.eat();
     bb.doi();
     bb.hey();
 }
