#include<bits/stdc++.h>
using namespace std;

class sum1
{

private :

    int sum;
    int num;

public :

       void set_Data(int n)
       {
           num = n;
       }
       void cal()
       {
           sum = 0;
           for(int i =1; i<=num; i++)
           {
               sum = sum + i;
           }
       }

       void display()
       {

           for(int i = 1;i<=num; i++)
           {
               cout<<i<<" ";
           }
           cout<<endl;
       }

       void print_sum()
       {
           cout<<"Sum is : "<<sum;
       }

};

int main()
{
    int n;
    cin>>n;

    sum1 s;
    s.set_Data(n);
    s.cal();
    s.display();
    s.print_sum();
}
