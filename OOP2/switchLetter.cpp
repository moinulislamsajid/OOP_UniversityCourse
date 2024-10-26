#include <iostream>
using namespace std;

int main() {
    int grade;
   string letterGrade;

    cout << "Enter the numerical grade (0-100): ";
    cin >> grade;

    // Determine the letter grade using switch case
    switch (grade / 10) {
        case 10: // When grade is 100
        case 9:  // When grade is between 90 and 99 ->>>> this are A+++
        case 8:  // When grade is between 80 and 89
            letterGrade = "A+";
            break;
        case 7:  // When grade is between 70 and 79
            letterGrade = "A";
            break;
        case 6:  // When grade is between 60 and 69
            letterGrade = "A-";
            break;
        case 5:  // When grade is between 50 and 59
            letterGrade = "B";
            break;
        case 4:  // When grade is between 40 and 49
            letterGrade = "C";
            break;
        default: // When grade is below 40
            letterGrade = "F";
            break;
    }



    cout << "The letter grade is: " << letterGrade << endl;

    return 0;
}
