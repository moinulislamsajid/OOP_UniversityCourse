#include <bits/stdc++.h>
using namespace std;

int n_series(int n)
{
    if (n < 2)
    {
        return 0; // Return 0 for cases where n is less than 2
    }
    if (n == 2)
    {
        return 2; // Base case for n = 2
    }
    return n + n_series(n - 2); // Sum up the series recursively
}

int main()
{
    int n;
    cin >> n;

    for (int i = 2; i <= n; i += 2) // Loop through even numbers from 2 to n
    {
        cout << i << " ";
    }
    cout << endl;

    // To print the sum of the series if needed
    int sum = n_series(n);
    cout << "Sum: " << sum << endl;

    return 0;
}
