#include<bits/stdc++.h>
using namespace std;

int series(int n)
{

    if(n == 1)
    {
        return 1;
    }

    return n+series(n-1);
}

int main()
{
    int n;
    cout<<"Enter any value to find the summation sum : ";
    cin>>n;

    int ans = series(n);
    cout<<"Summation of series "<<ans;

}
