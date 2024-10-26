#include<bits/stdc++.h>

using namespace std;

class Student {

private :

    string name;
    int roll;
    float gpa;


public :

    Student(string name, int roll, float gpa)
    {

        this->name = name;
        this->roll = roll;
        this->gpa = gpa;


    }

    friend class stu;


};

class stu{


    public :

    void display(Student & f){

        cout<<f.name<<" "<<f.roll<<" "<<f.gpa;

    }



};

int main()

{

    Student s1("Sajid",19,3.98);

    stu s11;

    s11.display(s1);

}
