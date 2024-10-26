#include<bits/stdc++.h>
using namespace std;


class encap
{

public :

    encap(int n = 0)
    {
        total = n;
    }

    void set_num(int num)
    {

        total = total + num;
    }

    int get_total()
    {

        return total;
    };

private :

    int total;
};

int main()

{
    encap a;
    a.set_num(10);
    a.set_num(20);
    a.set_num(30);

    cout<<a.get_total  ()<<" ";

}
