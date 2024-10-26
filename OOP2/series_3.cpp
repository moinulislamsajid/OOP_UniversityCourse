#include<bits/stdc++.h>
using namespace std;

class cal_series

{

private :

    int sum = 0,num;

public :


    void setdata(int n)
    {

        num = n;
    }

    void cal()
    {

        for(int i = 0; i<=num; i++)

        {

            sum = sum + pow(3,i);
        }

    }

    void display()

    {
        cout<<"Sum of this series : "<<sum;
    }




};

int main()

{

    int n;

    cout<<"Enter any number : ";
    cin>>n;

    cal_series obj;

    obj.setdata(n);
    obj.cal();
    obj.display();
}
