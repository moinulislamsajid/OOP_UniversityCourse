#include<bits/stdc++.h>
using namespace std;

class Sum{

private :

    int num;
    int sum;

public :

   void set_Data(int n)
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

            cout<<i;

            if(i < num)
            {

                cout<<",";
            }
        }

        cout<<endl;
    }

    void display_sum()
    {

        cout<<"Summation is : "<<sum<<endl;
    }


};

int main()
{

    int n;
    cin>>n;

    Sum s;
    s.set_Data(n);
    s.cal();
    s.display_Number();
    s.display_sum();
}
