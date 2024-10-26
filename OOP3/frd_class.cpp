#include<bits/stdc++.h>
using namespace std;

class red
{

private :

    int id;
    string name;

public :

    // create a constructor to initial the value

    red(int id,string name)
    {
        this->id = id;
        this->name = name;
    }

    // now declared the friend class

    friend class last;

};

class last
{

public :


    void display(red &h)
    {

        cout<<"His id is : "<<h.id<<endl;
        cout<<"His name is : "<<h.name<<endl;
    }


};

int main()
{

    red h(101,"Ayman Sajid");
    last l;
    l.display(h);
}
