#include<bits/stdc++.h>
using namespace std;

class Bubble_Sort

{

private :

    int *number, num;

public :


    void setData(int n)
    {

        num = n;
        number= new int[num];

        cout<<"Enter arrays Element : ";

        for(int i = 0; i<num; i++){

            cin>>number[i];
        }

    }

    void cal()
    {


        for(int i = 0; i<num - 1; i++)
        {

            for(int j = 0; j<num-i-1; j++)
            {

                if(number[j] > number[j+1])
                {

                    swap(number[j],number[j+1]);
                }
            }
        }
    }

    void display()

    {


        cout<<"Sorted arrays : ";
        for(int i = 0; i<num; i++)
        {

            cout<<number[i]<<" ";
        }
    }


};


int main()

{

    int nn;
    cin>>nn;

    Bubble_Sort obj;

    obj.setData(nn);
    obj.cal();
    obj.display();


}
