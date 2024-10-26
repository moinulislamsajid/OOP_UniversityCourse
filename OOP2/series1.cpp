#include<bits/stdc++.h>
using namespace std;

class Sqr_sum {

private:

    int num;
    int sum;

public:
    void set_Data(int n) {
        num = n;
    }

    void cal() {
        sum = 0;
        for(int i = 0; i <= num; i += 1) {
            sum += pow(3, i);
        }
    }

    void display_numbers() {
        for(int i = 0; i <= num; i += 1) {
            cout << pow(3, i) << " ";

        }
        cout << endl;
    }

    void display_sum() {
        cout << "Sum is: " << sum << endl;
    }
};

int main() {
    int n;
    cin >> n;

    Sqr_sum s;
    s.set_Data(n);
    s.cal();
    s.display_numbers();
    s.display_sum();

    return 0;
}
