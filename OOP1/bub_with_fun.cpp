#include<bits/stdc++.h>
using namespace std;

void bubble(int num[], int n)
{
    for(int i = 0; i<n - 1; i++)
    {
        for(int j = 0; j<n-i-1; j++)
        {
            if(num[j] > num[j+1])
            {
                int temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

    cout<<"Sorted Arrays : ";
    for(int i=0; i<n; i++)
    {
        cout<<num[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int number[n];
    for(int i = 0; i<n; i++)
    {
        cin>>number[i];
    }

    bubble(number,n);
}
