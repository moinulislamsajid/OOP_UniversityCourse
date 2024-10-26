#include<bits/stdc++.h>
using namespace std;

class hello
{

private :

    int id;
    string name;

public :

    // create a constructor to initial the value

    hello(int id,string name)
    {

        this->id = id;
        this->name = name;

    }

    friend class helloClass;
};

class helloClass
{

public :

    void display(hello &a)
    {

        cout<<"His id : "<<a.id<<endl;
        cout<<"His name : "<<a.name<<endl;
    }
};


int main()
{


    hello h(101,"Ayman Sajid");
    helloClass clg;
    clg.display(h);
}
