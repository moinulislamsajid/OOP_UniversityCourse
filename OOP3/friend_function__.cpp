#include<bits/stdc++.h>
using namespace std;

class Student
{
private :

    int stu;

public :

    Student()
    {
        stu = 1000;
    }

    friend int stu_print(Student s);
};

int stu_print(Student v)
{
    v.stu = 10000;
    return v.stu;
}

int main()
{
    Student st;
    cout<<stu_print(st);
}
