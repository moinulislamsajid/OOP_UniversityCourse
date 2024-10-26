#include<bits/stdc++.h>
using namespace std;

class single
{
public :

    void display();
};

class two : public single
{
public :

    void display()
    {
        cout<<"Hello WOrld";
    }
};

int main()
{
    two t;
    t.display();
}
