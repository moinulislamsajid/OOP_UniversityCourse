#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout<<"Enter the size what you wanted to the  fibonacci series : ";
    cin>>n;
    int number[n];

    // initial the value

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
