#include <iostream>
using namespace std;

class Fibonacci {
private:
    int fibonacci[100];
    int s;

public:
    Fibonacci() {

        fibonacci[0] = 0;
        fibonacci[1] = 1;
    }



    void setData(int n)
    {

        s = n;
    }
    void generateSeries() {


        for (int i = 2; i < s; i++) {
            fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
        }
    }

    void printSeries() {
        cout << "Fibonacci series: ";
        for (int i = 0; i < s; ++i) {
            cout << fibonacci[i] << " ";
        }
        cout << endl;
    }
};

int main() {

        int n;
        cin>>n;
      Fibonacci fib;
    fib.setData(n);
    fib.generateSeries();
    fib.printSeries();

    return 0;
}
