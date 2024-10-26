#include<bits/stdc++.h>
using namespace std;

class over
{

private :

    int num;

public :

    over()
    {

        num = 3939;
    }

    void operator ++ ()
    {

        num = num + 1000000;
    }

    void display()
    {
        cout<<"Value is : "<<num<<endl;
    }


};

int main()
{

    over ob;
    ++ob;
    ob.display();
}
