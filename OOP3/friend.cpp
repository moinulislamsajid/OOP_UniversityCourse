#include<bits/stdc++.h>
using namespace std;

class fri_fun
{

private:

    int stu;

public:

    // create a constructor

    fri_fun()
    {
        stu = 0;
    }

    // now declared the friend function

    friend int return_value(fri_fun b);

};

//  implement the friend function

int return_value(fri_fun c)
{

    c.stu = 9999191;
    return c.stu;
}
int main()
{
    fri_fun obj;
    cout<<return_value(obj);
}
