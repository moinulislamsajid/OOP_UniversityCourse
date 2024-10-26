#include <bits/stdc++.h>
using namespace std;

void helloSingle(int);
void helloDouble(int, int);
void helloDouble(int i);

void helloSingle(int i) {

    cout << "Answer is : " << i << endl;
}

void helloDouble(int a, int b = 120) {
    cout << "A is : " << a << endl;
    cout << "B is : " << b << endl;
}

int main() {
    helloSingle(20);      // Calls helloSingle(int)
    helloDouble(30, 150); // Calls helloDouble(int, int)
}
