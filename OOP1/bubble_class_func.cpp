#include<bits/stdc++.h>
using namespace std;

class bubble{

private :
    int * number,num;

public :

    void set_Data(int n)

    {

        num = n;
        number = new int[num];
        cout<<"Enter arrays element : ";
        for(int i = 0; i<num; i++)
        {
            cin>>number[i];
        }
    }

    void cal()
    {

        for(int i = 0; i< num - 1; i++)
        {

            for(int j = 0; j<num - i - 1; j++)
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

        cout<<"Sorted Arrays : ";

        for(int i = 0; i<num; i++)
        {
            cout<<number[i] <<" ";
        }
    }

};

int main()

{

    int n;
    cout<<"Enter arrays size : ";
    cin>>n;

    bubble bb;
    bb.set_Data(n);
    bb.cal();
    bb.display();
}
