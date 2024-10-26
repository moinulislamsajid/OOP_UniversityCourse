#include<bits/stdc++.h>
using namespace std;

void fun(int);
void fun(int i);
void fun(double j);

void fun(int i)
{
    cout<<i<<endl;
}
void fun(double j)
{
    cout<<j<<endl;
}

int main()
{
    fun(10);
    fun(4.5);

}
