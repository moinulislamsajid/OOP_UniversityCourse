#include<bits/stdc++.h>
using namespace std;

class copy1
{

private :

    int m,n;

public :

    copy1()
    {
        m = 10;
        n = 20;
    }

    copy1(copy1 &q)
    {
        m = q.m;
        n = q.n;

    }

    void display()
    {

        cout<<"A : "<<m<<"B : "<<n<<endl;
    }

};

int main()

{

    copy1 ob;
    ob.display();


    copy1 ob1(ob);
    ob1.display();



}
