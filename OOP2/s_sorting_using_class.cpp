#include<bits/stdc++.h>
using namespace std;

class bub
{

private :

    int *number;
    int n;

public :

    void getInput(int n)
    {
        this->n = n;
        number = new int[n];
        cout<<"Enter arrays element : ";
        for(int i = 0; i<n; i++)
        {
            cin>>number[i];
        }
    }

    void cal()
    {
        for(int i=0; i<n-1; i++)
        {
            for(int j = 0; j<n-1-i; j++)
            {
                if(number[j] < number[j+1])
                {
                    int temp = number[j];
                    number[j] = number[j+1];
                    number[j+1] = temp;
                }
            }
        }
    }

    void display()
    {

        for(int i=0; i<n; i++)
        {
            cout<<number[i]<<" ";
        }
    }

};

int main()
{
    int n;
    cout<<"Enter size of arrays : ";
    cin>>n;

    bub b;
    b.getInput(n);
    b.cal();
    b.display();
}
