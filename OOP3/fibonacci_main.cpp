#include<bits/stdc++.h>

using namespace std;

int main()
{
    int number[100],n;

    cout<<"how many number you can show the fibonacci series : ";
    cin>>n;

    number[0] = 0;
    number[1] = 1;

    for(int i = 2; i<n; i++)
    {

         number[i] = number[i-1] + number[i-2];
    }

    for(int i = 0; i<n; i++)
    {

        cout<<number[i]<<" ";
    }

}
