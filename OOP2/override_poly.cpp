#include<bits/stdc++.h>
using namespace std;

class peo
{
public :

    void hello();
};

class leo : public peo
{
public :

    void hello()
    {
        cout<<"This overiding method"<<endl;
    }
};
int main()
{

    leo l;
    l.hello();
}
