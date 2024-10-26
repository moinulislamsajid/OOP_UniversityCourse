#include<bits/stdc++.h>
using namespace std;

class friendC
{
private :

    int id;
    string name;
    float gpa;

public :

    friendC(int id,string name,float gpa)
    {
        this->id = id;
        this->name = name;
        this->gpa = gpa;
    }

    friend class hello;
};

class hello
{
public :

    void display(friendC &v)
    {
        cout<<"His id : "<<v.id<<endl;
        cout<<"His name : "<<v.name<<endl;
        cout<<"His gpa : "<<v.gpa<<endl;
    }
};

int main()
{
    friendC frd(101,"Ayman Sajid",4.00f);
    hello h;
    h.display(frd);


}
