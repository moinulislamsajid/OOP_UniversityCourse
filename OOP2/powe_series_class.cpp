#include<bits/stdc++.h>
using namespace std;

class series
{
    private :

        int num,sum;

    public:

        void set_Data(int n)
        {
            num = n;
        }
        void cal()
        {
            sum = 0;
            for(int i = 0; i<num; i++)
            {
                sum = sum + pow(3,i);
            }
        }

        void display_Number()
        {
            for(int i = 0; i<num; i++)
            {
                cout<<pow(3,i)<<" ";
            }
            cout<<endl;
        }

        void print_sum()
        {
            cout<<"Summation is : "<<sum<<endl;
        }

};

int main()
{
    int n;
    cin>>n;



    series s;
    s.set_Data(n);
    s.cal();
    s.display_Number();
    s.print_sum();

}
