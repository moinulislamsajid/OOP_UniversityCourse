#include<bits/stdc++.h>
using namespace std;

void buble(int num[], int n)
{

    for(int i = 0; i<n-1; i++)
    {
        for(int j = 0; j<n - i - 1; j++)
        {
            if(num[j] < num[j+1])
            {
                int temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

    for(int i = 0; i<n; i++)
    {
        cout<<num[i]<<" ";
    }

}
int main()
{
    int sz;
    cout<<"Enter the size of arrays : ";
    cin>>sz;

    int num[sz];
    for(int i=0; i<sz; i++)
    {
        cin>>num[i];
    }

    // called the function

    buble(num,sz);
}
