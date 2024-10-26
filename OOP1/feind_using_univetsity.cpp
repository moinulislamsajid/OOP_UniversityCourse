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

    friend int printValue(Student v);


};

int printValue(Student c)

{

    c.stu = 10000;
    return c.stu;
}

int main()

{

     Student ss;

     cout<<printValue(ss);
}
