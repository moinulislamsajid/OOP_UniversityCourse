#include<bits/stdc++.h>

using namespace std;

class student
{


private :

    int roll;

public :

    void setr(int ro)
    {

        roll = ro;
    }

    int get_roll()
    {

        return roll;
    }


};

student stu();

int main()
{


    student s;

    s =  stu();

    cout<<"ROLL : "<<s.get_roll();
}

student stu()
{

    student ss;
    ss.setr(11);
    return ss;
}
