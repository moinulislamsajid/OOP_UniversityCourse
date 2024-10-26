#include<bits/stdc++.h>
using namespace std;

class hello
{

private :

    int id;
    string name;

public :

    hello(int id, string name)
    {

        this->id = id;
        this->name = name;

    }

    friend class fri_class;
};

class fri_class
{
    publi                                                                                                                                                                                                                               c :
    void display(hello &d)
    {
        cout<<"His is : "<<d.id;
        cout<<"\nHis name : "<<d.name;
    }
};

int main()
{

    hello h(101,"Ayman Sajid");
    fri_class b;
    b.display(h);
}
