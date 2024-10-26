#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Size;
    cout<<"Enter the size of arrays : ";
    cin>>Size;

    int number[Size];

    // get the input

    for(int i=0; i<Size; i++)
    {
        cin>>number[i];
    }

    for(int i=0; i<Size-1; i++)
    {
        for(int j = 0; j<Size-i -1; j++)
        {

            if(number[j] > number[j+1])
            {
                int temp = number[j];
                number[j] = number[j+1];
                number[j+1] = temp;
            }
        }
    }

    cout<<"\nSorted Arrays : ";
    for(int i =0; i<Size; i++)
    {
        cout<<number[i]<<" ";
    }
}
