#include<bits/stdc++.h>
using namespace std;

class frd_fun
{
private:

    int stu;


public:

    // create a constructor
    frd_fun()
    {
        stu = 0;
    }

    friend int print_value(frd_fun v);

};

int prit_value(frd_fun c)
{
    c.stu = 10000;
    return c.stu;


}

int main()

{

    frd_fun fun;
    cout<<prit_value(fun);



}
