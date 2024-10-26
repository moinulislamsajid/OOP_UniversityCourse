#include<bits/stdc++.h>
using namespace std;

int main()

{

    string name;

    cin>>name;

    // create an arrays frequency arrays

    int array[26] = {0};

    for(char s : name)
    {

        array[s - 'a']++;
    }

    // print the sorting the arrays

    for(char i = 'a'; i<='z'; i++)
    {

        for(int j = 0; j<array[i - 'a']; j++)
        {

            cout<<i;
        }
    }


}
