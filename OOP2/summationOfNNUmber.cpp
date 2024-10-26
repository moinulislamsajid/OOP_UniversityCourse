#include<bits/stdc++.h>
using namespace std;

class calSum

{

private :

    int num,sum = 0;

public :

    void setdata(int n)
    {

        num = n;
    }

    void cal()
    {

        for(int i = 1; i<=num; i++)
        {

            sum = sum + i;
        }
    }

    void display()

    {

        cout<<"Sum is : "<<sum;
    }


};

int main()

{

    int n;

    cout<<"Enter any number : ";
    cin>>n;
    calSum obj;

    obj.setdata(n );
    obj.cal();
    obj.display();


}
