#include<bits/stdc++.h>
using namespace std;

void fun(int);    // Takes an int by value
void fun(int &);  // Takes an int by reference

int main()
{
    int a = 29;
    fun(static_cast<int>(a));  // Explicitly call the value overload
    return 0;
}

void fun(int x)
{
    cout << "Value of x (passed by value) is : " << x << endl;
}

void fun(int &b)
{
    cout << "Value of b (passed by reference) is : " << b << endl;
}
