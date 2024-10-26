#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout<<"Enter any number to find out the fibonacci series : ";
    cin>>n;

    // declare an arrays

    int num[100];

    // initial the value

    num[0] = 0;
    num[1] = 1;

    for(int i=2; i<n; i++)
    {
        num[i] = num[i - 1] + num[i-2];
    }

    for(int i = 0; i<n; i++)
    {
        cout<<num[i]<<" ";
    }
}
