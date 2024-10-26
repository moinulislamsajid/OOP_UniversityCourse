#include<bits/stdc++.h>
using namespace std;

class load
{
private :

    int num;

public :

    // create a constructor

    load()
    {
        num = 10;
    }

    void operator ++()
    {
        num+=2;
    }

    void display()
    {
        cout<<num<<endl;
    }

};

int main()
{
    load l;
    ++l;
    l.display();
}
