#include<bits/stdc++.h>
using namespace std;

class constructor

{

private :

    int sum,rad;

public :

    constructor()
    {
        cout<<"This is default constructor"<<endl;
    }

    constructor(int x, int y)
    {
        sum = x+y;
        cout<<"Sum is : "<<sum<<endl;
    }

    constructor(int r)
    {

        rad = 3.1416 * r * r;
        cout<<"Radius is "<<rad;
    }

};

int main()
{
    constructor con;
    constructor con1(10,20);
    constructor con2(9);


}
