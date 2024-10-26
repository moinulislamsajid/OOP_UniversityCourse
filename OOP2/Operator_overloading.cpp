           #include <iostream>
using namespace std;

// Define class A
class A {

public:

    int value; // Example member variable

    // Default constructor
    A(){

        value = 0;
    }

    // Parameterized constructor

    A(int v){

        value = v;
    }

    // Overload the + operator

    A operator+(const A& other) const {
        return A(this->value + other.value);
    }

    // Function to display the value

    void display()
     {
       cout << "Value: " << value << endl;
    }
};

int main() {
    A a1(10), a2(20), a3;

    // Add two objects of type A
    a3 = a1 + a2;

    // Display the result
    a3.display();

    return 0;
}
