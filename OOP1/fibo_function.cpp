#include<bits/stdc++.h>

using namespace std;

void fibo_cal(int num[] , int n)

{

    num[0] = 0;
    num[1] = 1;

    for(int i = 2; i<n; i++)
    {

        num[i] = num[i-1] + num[i-2];
    }

    for(int i = 0; i<n; i++)
    {

        cout<<num[i]<<" ";
    }
}

int main()

{

    int number;
    cout<<"Enter any number to show the fibonacci series : ";
    cin>>number;

    int arr[100];

    fibo_cal(arr,number);
}