#include<bits/stdc++.h>
using namespace std;

class using_friend
{
private :

    int stu;

public :

    // create constructor to initial the value

    using_friend()
    {
        stu = 0;
    }

    friend int return_value(using_friend b);
};

int return_value(using_friend c)
{
    c.stu = 20000;
    return c.stu;
}

int main()
{

    using_friend b;;
    cout<<return_value(b);
}
