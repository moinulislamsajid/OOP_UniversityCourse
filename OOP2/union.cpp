#include<bits/stdc++.h>
using namespace std;

union hello
{
    int a;
    float b;
    char c;
};

int main()
{
    union hello h;
    h.a = 10;
    h.b = 5.3;
    h.c = 'a';

    cout<<"The value is : "<<h.a<<endl;
    cout<<"The value is : "<<h.b<<endl;
    cout<<"The value is : "<<h.c<<endl;


}
