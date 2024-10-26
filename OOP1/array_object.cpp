#include<bits/stdc++.h>

using namespace std;

class Student

{

public :

    string name;
    int roll;
    int marks;
};

int main()

{

    int n;

    cin>>n;

    Student stu[n];

    for(int i = 0; i<n; i++)
    {

         cin>>stu[i].name>>stu[i].roll>>stu[i].marks;
    }


    // print the values

    cout<<"Print the values : ";

    for(int i = 0; i<n; i++)
    {

        cout<<stu[i].name<<" "<<stu[i].roll<<" "<<stu[i].marks<<endl;
    }
}
