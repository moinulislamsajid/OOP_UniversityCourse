#include<bits/stdc++.h>
using namespace std;

void func(int);
void func(int,int);
void func(int i);

void func(int i)
{
    cout<<i<<endl;
}
void func(int a,int b =10)
{
    cout<<a<<endl;
    cout<<b<<endl;
}
int main()
{
    func(133);
    func(12,4);
}
