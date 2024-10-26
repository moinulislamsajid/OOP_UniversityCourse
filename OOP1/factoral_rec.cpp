#include<bits/stdc++.h>
using namespace std;

int fact(int num)
{

    if(num == 0 || num == 1)
    {
        return 1;
    }

    return num*fact(num - 1);
}

int main()
{

    int n;
    cin>>n;

    int ans = fact(n);
    cout<<"Factorial is : "<<ans;
}
