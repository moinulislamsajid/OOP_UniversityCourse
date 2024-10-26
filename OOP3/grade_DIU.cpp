#include<bits/stdc++.h>

using namespace std;


int main()

{

    int num;

    cin>>num;

    if(num<0)
    {

        cout<<"Wrong Number";
    }
    else if(num>100)
    {

        cout<<"Wrong Number";

    }
    else if(num < 40)
    {
        cout<<"Fail";
    }
    else if(num>=40 && num<50)
    {
        cout<<"E";
    }
    else if(num>=50 && num<60)
    {
        cout<<"D";
    }
    else if(num>=60 && num<65)
    {
        cout<<"C";
    }
    else if(num>=65 && num<70)
    {
        cout<<"B";
    }
    else if(num>=70 && num<75)
    {
        cout<<"A-";
    }
    else if(num>=75 && num<80)
    {
        cout<<"A";
    }
    else if(num>=80 && num<=100)
    {
        cout<<"A+";
    }
}
