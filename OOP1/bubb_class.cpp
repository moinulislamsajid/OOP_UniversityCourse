#include<bits/stdc++.h>
using namespace std;

class bubble
{
private :

    int *number;
    int n;

public :

    void info(int n)
    {
       this->n = n;

        number = new int[n];

        for(int i =0; i<n; i++)
        {
            cin>>number[i];
        }
    }
    void cal()
    {


        for(int i = 0; i<n-1; i++)
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

            cout<<"Sorted arrays : ";
            for(int i = 0; i<n; i++)
            {
                cout<<number[i]<<" ";
            }
        }

};

int main()

{
    int n;
    cin>>n;
    bubble obj;
    obj.info(n);
    obj.cal();
    obj.display();

}
