#include<bits/stdc++.h>
using namespace std;

class fri
{
private :

    int num;


public :

    // create a constructor to initial the value

    fri()
    {
        num = 0;
    }

    friend int printValue(fri &b);
};

int printValue(fri &n)
{
    n.num = 10000;
    return n.num;
}

int main()
{

    fri f;
    cout<<printValue(f)<<" ";
}
