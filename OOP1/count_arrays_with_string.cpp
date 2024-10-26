#include<bits/stdc++.h>

using namespace std;

int main()

{

    string name;
    cin>>name;

    int freq[26]={0};

    // to get the

    for(char s : name)
    {

        freq[s - 'a']++;
    }

    // now print the arrays

    for(char i = 'a'; i<='z'; i++)
    {

        for(int j = 0; j<freq[i - 'a']; j++)
        {

            cout<<i;
        }
    }
}
