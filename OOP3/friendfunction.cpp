#include<bits/stdc++.h>

using namespace std;

class Student{


private :

    int Roll;

public:

    // create a constructor to initial the value

    Student(int Roll){

        this->Roll = Roll;

    }

    // now friend keyword

    friend void printValue(Student & s1);






};

    void printValue(Student & stu){


        cout<<"Student Roll : "<<stu.Roll;

    }


int main()

{

    Student s1(19);
    printValue(s1);


}
