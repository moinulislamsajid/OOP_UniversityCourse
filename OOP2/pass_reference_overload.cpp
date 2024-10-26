#include <bits/stdc++.h>
using namespace std;

void funValue(int);
void funReference(int &);

int main() {
    int a = 10;
    funValue(a);       // Calls funValue(int)
    funReference(a);   // Calls funReference(int &)
}

void funValue(int x) {
    cout << "Value of x: " << x << endl;
}

void funReference(int &b) {
    cout << "Value of b: " << b << endl;
}
