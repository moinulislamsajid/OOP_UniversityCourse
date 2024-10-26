#include<bits/stdc++.h>
using namespace std;

void fibo(int num[],int n)
{
    num[0] = 0;
    num[1] = 1;

    for(int i=2; i<n;i++)
    {
        num[i] = num[i-1] + num[i-2];
    }

    for(int i =0; i<n; i++)
    {
        cout<<num[i]<<" ";
    }

}

int main()
{
    int n;
    cout<<"Enter any number : ";
    cin>>n;

    int number[100];


    fibo(number,n);
}
