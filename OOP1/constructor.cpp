#include<bits/stdc++.h>
using namespace std;

class cons
{

public :

    cons()
    {
        cout<<"Hello this is default constructor"<<endl;
    }
    cons(int x , int y)
    {
        int ans = x + y;
        cout<<"ANS : "<<ans<<endl;
    }

    cons(double length, double weight)
    {
        double ans = length * weight;
        cout<<"ANSWER : "<<ans<<endl;
    }


};

int main()
{
    cons c;
    cons c1(10,20);
    cons c2(6.6,3.3);
}
