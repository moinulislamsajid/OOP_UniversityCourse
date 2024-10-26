#include <iostream>
using namespace std;

class PowerOfThree {
private:
    int num;
    int sum;

public:
    void set_Data(int n) {
        num = n;
    }

    void cal() {
        sum = 0;
        int power = 1;  // Start with 3^0
        while (power <= num) {
            sum += power;
            power *= 3;
        }
    }

    void display_numbers() {
        int power = 1;  // Start with 3^0
        while (power <= num) {
            cout << power;
            power *= 3;
            if (power <= num) {
                cout << ", ";
            }
        }
        cout << endl;
    }

    void display_sum() {
        cout << "Sum is: " << sum << endl;
    }
};

int main() {
    int n;  // Upper limit
    cin >> n;

    PowerOfThree p;
    p.set_Data(n);
    p.cal();
    p.display_numbers();
    p.display_sum();

    return 0;
}
