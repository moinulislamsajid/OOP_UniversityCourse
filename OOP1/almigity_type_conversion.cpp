#include<bits/stdc++.h>
using namespace std;

void hello(int);
void hello(double);

void hello(int i )
{

    cout<<"Answer is : "<<i<<endl;
}

void hello(double f)
{

    cout<<"Answer is : "<<f<<endl;
}
int main()
{
    hello(10);
    hello(1.2);
}
