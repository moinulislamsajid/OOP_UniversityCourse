#include<bits/stdc++.h>
using namespace std;

class Student

{

private :

    int stu;

public :

    Student()
    {

        stu = 0;
    }

    friend int print(Student a);


};

int print(Student b)
{
    b.stu = 10000;
    return b.stu;
}


int main()

{

    Student s;

    cout<<print(s);
}
