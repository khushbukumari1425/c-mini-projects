#include <iostream>
#include <cmath>

using namespace std;

class Calculator {
public:
    // Function for addition
    double add(double a, double b) {
        return a + b;
    }

    // Function for subtraction
    double subtract(double a, double b) {
        return a - b;
    }

    // Function for multiplication
    double multiply(double a, double b) {
        return a * b;
    }

    // Function for division
    double divide(double a, double b) {
        if (b == 0) {
            cout << "Error: Division by zero." << endl;
            return 0; // Return 0 for error
        }
        return a / b;
    }

    // Function for modulo
    int modulo(int a, int b) {
        if (b == 0) {
            cout << "Error: Division by zero." << endl;
            return 0; // Return 0 for error
        }
        return a % b;
    }

    // Function for exponentiation
    double power(double base, double exponent) {
        return pow(base, exponent);
    }

    // Function for square root
    double squareRoot(double value) {
        if (value < 0) {
            cout << "Error: Square root of negative number." << endl;
            return 0; // Return 0 for error
        }
        return sqrt(value);
    }

    // Function for trigonometric operations
    double sine(double angle) {
        return sin(angle);
    }

    double cosine(double angle) {
        return cos(angle);
    }

    double tangent(double angle) {
        return tan(angle);
    }

    // Function for logarithmic operations
    double logarithm(double value) {
        if (value <= 0) {
            cout << "Error: Logarithm of non-positive number." << endl;
            return 0; // Return 0 for error
        }
        return log(value);
    }
};

int main() {
    Calculator calc;
    double num1, num2;
    int choice;

    do {
        cout << "\nScientific Calculator Menu:\n";
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "5. Modulo (%)\n";
        cout << "6. Exponentiation (^)\n";
        cout << "7. Sine\n";
        cout << "8. Cosine\n";
        cout << "9. Tangent\n";
        cout << "10. Logarithm\n";
        cout << "11. Square Root\n";
        cout << "12. Exit\n";
        cout << "Choose an operation (1-12): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << calc.add(num1, num2) << endl;
                break;
            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << calc.subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << calc.multiply(num1, num2) << endl;
                break;
            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << calc.divide(num1, num2) << endl;
                break;
            case 5:
                cout << "Enter two integers: ";
                int int1, int2;
                cin >> int1 >> int2;
                cout << "Result: " << calc.modulo(int1, int2) << endl;
                break;
            case 6:
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                cout << "Result: " << calc.power(num1, num2) << endl;
                break;
            case 7:
                cout << "Enter angle in degrees: ";
                cin >> num1;
                cout << "Result: " << calc.sine(num1 * M_PI / 180) << endl; // Convert degrees to radians
                break;
            case 8:
                cout << "Enter angle in degrees: ";
                cin >> num1;
                cout << "Result: " << calc.cosine(num1 * M_PI / 180) << endl;
                break;
            case 9:
                cout << "Enter angle in degrees: ";
                cin >> num1;
                cout << "Result: " << calc.tangent(num1 * M_PI / 180) << endl;
                break;
            case 10:
                cout << "Enter a number: ";
                cin >> num1;
                cout << "Result: " << calc.logarithm(num1) << endl;
                break;
            case 11:
                cout << "Enter a number: ";
                cin >> num1;
                cout << "Result: " << calc.squareRoot(num1) << endl;
                break;
            case 12:
                cout << "Exiting the calculator. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please choose again." << endl;
                break;
        }
    } while (choice != 12);

    return 0;
}
