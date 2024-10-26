#include<bits/stdc++.h>
using namespace std;

class single
{
public :

    float sal = 200;

};

class doub : public single
{

public :

    float bon = 20;
};

int main()
{

    doub d;

    cout<<"Sal "<<d.sal;
    cout<<"bon "<<d.bon;
}
