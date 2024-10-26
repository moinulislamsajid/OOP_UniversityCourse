#include<bits/stdc++.h>
using namespace std;

class fri

{

private :

    int id;
    string name;


public :

    // create a constructor to initial the value

    fri(int id,string name)
    {

        this->id = id;
        this->name = name;

    }

    friend class hello;
};

// create friend class

class hello
{

public :

    void display(fri &b)
    {

        cout<<"His id : "<<b.id;
        cout<<"\nHis name : "<<b.name;
    }
};

int main()
{

    fri g(101,"Ayman Sajid");
    hello h;
    h.display(g);


}
