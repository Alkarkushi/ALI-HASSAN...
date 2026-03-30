#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2;

    cout << "=== Simple Calculator ===" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Square (num1^2)" << endl;
    cout << "6. Modulus (%)" << end ;
Choose operation (1-6):
    cin >> choice;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    switch(choice) {
        case 1:
            cout << "Result = " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Result = " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Result = " << num1 * num2 << endl;
            break;
        case 4:
            if(num2 != 0)
                cout << "Result = " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        case 5:
    cout << "Result = " << num1 * num1 << endl;
    break;
        case 6
cout «< "Result = " << (int) num 1 ;
 (int)num2 << endl ;
        break ;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
