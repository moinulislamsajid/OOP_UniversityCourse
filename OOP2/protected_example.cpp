#include<bits/stdc++.h>
using namespace std;

class prob
{
protected:

    int id;
    string name;
    float gpa;
};

class inherit : public prob
{

public :

    void setData(int id,string name,float gpa)
    {

        this->id = id;
        this->name = name;
        this->gpa = gpa;


    }

    void display()
    {

        cout<<"ID : "<<id<<endl;
        cout<<"NAME : "<<name<<endl;
        cout<<"GPA : "<<gpa<<endl;

    }


};

int main()
{

    inherit h;
    h.setData(101,"Ayman Sajid",3.98);
    h.display();





}
