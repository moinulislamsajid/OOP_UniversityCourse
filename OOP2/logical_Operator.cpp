#include<bits/stdc++.h>

using namespace std;

int main()

{


    int num,num1,x,y;

    cin>>num>>num1;

    x = (num>num1) ? num : num1;
    cout<<"Max : "<<x;
    y = (num1<num) ? num1 : num;
    cout<<"\nMinimum number : "<<y;

}
