#include<bits/stdc++.h>
using namespace std;

class bubble
{

private :


    int * number;
    int n;


public :

    void get_information(int num)
    {
        n = num;
        number = new int[n];

        cout<<"Enter the arrays value : ";
        for(int i = 0; i<n; i++)
        {

            cin>>number[i];
        }

    }

    void cal()
    {

        for(int i=0; i<n-1; i++)
        {
            for(int j = 0; j<n-i-1; j++)
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

        for(int i = 0; i<n; i++)
        {
            cout<<number[i]<<" ";
        }
    }


};

int main()

{

    int n;
    cout<<"Enter the size of arrays : ";
    cin>>n;



    bubble bub;

    bub.get_information(n);
    bub.cal();
    bub.display();



}
