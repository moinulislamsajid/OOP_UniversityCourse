#include<bits/stdc++.h>
using namespace std;

int main()
{

    int x,y,num1,num2;
    cin>>num1>>num2;

    x = (num1>num2) ? num1 : num2;
    y = (num2 < num1) ? num2 : num1;

    cout<<"Maximum Number is : "<<x<<endl;
    cout<<"Minimum  Number is : "<<y<<endl;

}
