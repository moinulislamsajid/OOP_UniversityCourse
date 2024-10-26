#include<bits/stdc++.h>

using namespace std;

class Student{

private :


    string name;
    int roll;


public :

    Student(int roll, string name)
    {

        this->roll = roll;
        this->name = name;
    }

    friend class sajid;



};

class sajid
{


public :

    void display(Student s)
    {

        cout<<s.name<<endl;
        cout<<s.roll;
    }
};

int main()

{

    Student s1(10,"sajid");
    sajid a;
    a.display(s1);
}


