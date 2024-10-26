#include<bits/stdc++.h>
using namespace std;

class frd
{

private :

    int length;

public :

    // create a constructor to initial the value

    frd()
    {
        length = 0;
    }

    // using friend function

    friend int box(frd v);
};

int box(frd b)
{

    b.length+=10;

    return b.length;
}

int main()
{


    frd b;
    cout<<box(b)<<endl;
}
