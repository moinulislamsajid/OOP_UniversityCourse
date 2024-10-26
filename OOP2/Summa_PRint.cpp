#include<bits/stdc++.h>
using namespace std;

class Sum
{

private :

    int num;
    int sum;

public :

    void set_data(int n)
    {

        num = n;
    }
    void cal()
    {

        sum = 0;
        for(int i = 1; i<=num; i++)
        {

            sum = sum + i;
        }
    }

    void display_Number()
    {

        for(int i = 1; i<=num; i++)
        {

            cout<<i<<" ";

            if(i < num)
            {
                cout<<",";
            }

        }
        cout<<endl;
    }
    void print_sum()
    {

        cout<<"Summation  is : "<<sum;
    }

};


int main()
{

    int n;
    cin>>n;

    Sum s;

    s.set_data(n);
    s.cal();
    s.display_Number();
    s.print_sum();
}
