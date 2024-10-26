#include<bits/stdc++.h>
using namespace std;

class encap
{
private :

    int total;

public :

    encap(int h = 0)
    {
        total = h;
    }
    void addNum(int num)
    {
        total+=num;
    }

    int getTotal()
    {
        return total;
    }

};

int main()
{
    encap e;
    e.addNum(10);
    e.addNum(10);
    e.addNum(10);
    e.addNum(10);

    cout<<e.getTotal()<<endl;
}
