#include<bits/stdc++.h>
using namespace std;

class fri_class
{
private :

    int id;
    string name;

public :

    // create a constructor to initial the value

    fri_class(int id,string name)
    {

        this->id = id;
        this->name = name;
    }

    friend class hello;
};

class hello
{

    public :

    void display(fri_class &b)
    {
        cout<<"His id : "<<b.id;
        cout<<"\nHis name : "<<b.name;
    }

};

int main()

{

    fri_class obj(101,"Ayman Sajid");
    hello h;
    h.display(obj);


}
