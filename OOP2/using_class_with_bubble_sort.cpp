#include<bits/stdc++.h>
using namespace std;

class bubble
{
private :

    int * number;
    int num;

public :

    void input_data(int n)
    {
        num = n;

        number = new int[num];
        cout<<"Enter arrays element : ";
        for(int i = 0; i<num; i++)
        {
            cin>>number[i];
        }
    }

    void calculation()
    {
        for(int i = 0; i<num-1; i++)
        {
            for(int j = 0; j<num - i -1; j++)
            {
                if(number[j] > number[j+1])
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
        for(int i = 0; i<num; i++)
        {
            cout<<number[i]<<" ";
        }
    }

};

int main()
{
    int n;
    cout<<"ENter the size of arrays : ";
    cin>>n;

    bubble bub;
    bub.input_data(n);
    bub.calculation();
    bub.display();
}
