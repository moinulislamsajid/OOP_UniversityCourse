#include<bits/stdc++.h>
using namespace std;

int main()
{

    int lar,sm,num1,num2,num3;

    cin>>num1>>num2>>num3;

    lar = (num1>num2) ? (num1>num3 ? num1 : num3) : (num2>num3 ? num2 : num3);
    sm =  (num1<num2) ? (num1<num3 ? num1 : num3) : (num2<num3 ? num2 : num3);

    cout<<"Maximum number is : "<<lar;
    cout<<"\nMinimum number is : "<<sm;
}
