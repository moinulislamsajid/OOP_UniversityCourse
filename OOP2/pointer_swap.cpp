#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a = 20,b=10,*p1=&a,*p2=&b;

    cout<<"Before Swaping"<<endl;
    cout<<"A : "<<*p1<<" , B : "<<*p2<<endl;

    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;

    cout<<"After swaping "<<endl;
    cout<<"A : "<<*p1<<" B : "<<*p2<<endl;
}
