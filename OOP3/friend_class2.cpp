#include<bits/stdc++.h>
using namespace std;

class friend_using

{
private :

    int id;
    string name;

public :


    friend_using(int id, string name)
    {

        this->id = id;
        this->name = name;
    }

    friend class hey_frined;

};

class hey_frined
{
public :

    void display(friend_using & v)
    {

        cout<<"His id : "<<v.id;
        cout<<"\nHis Name : "<<v.name;

    }


};

int main()
{

    friend_using obj(101,"Ayman Sajid");
    hey_frined obj1;
    obj1.display(obj);

}
