#include<bits/stdc++.h>
using namespace std;

class fri_function
{
private :

    int stu;

public :

    // create a constructor to initial the constructor
    fri_function()
    {
        stu = 0;
    }

    // using friend function

    friend int printValue(fri_function b);

};

// create function to implement friend function


int printValue(fri_function b)
{
    b.stu = 10000;
    return b.stu;
}

int main()
{
    fri_function f;
    cout<<printValue(f);

}
