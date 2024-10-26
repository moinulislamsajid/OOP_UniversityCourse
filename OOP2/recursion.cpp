#include<bits/stdc++.h>
using namespace std;

int fact_with(int n)
{

    if(n == 0 || n == 1)
    {

        return 1;
    }

    return n*fact_with(n-1);
}

int main()
{

    int n;
    cin>>n;

    int ans = fact_with(n);

    cout<<"Factorial is : "<<ans;
}
