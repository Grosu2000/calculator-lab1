#include <iostream>
#include <string>
#include <limits>
#include "operations.h"

using namespace std;

const string VERSION = "v1.5.0";

void printMenu() {
    cout << "\n=== Calculator " << VERSION << " ===\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Power\n";
    cout << "6. Modulo\n";
    cout << "0. Exit\n";
    cout << "Choice: ";
}

int main() {
    cout << "Welcome to the calculator!\n";

    int choice;
    double a, b;

    while (true) {
        printMenu();

        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Try again.\n";
            continue;
        }

        if (choice == 0) {
            cout << "Goodbye!\n";
            break;
        }

        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;

        try {
            switch (choice) {
                case 1: cout << "= " << op_add(a, b) << "\n"; break;
                case 2: cout << "= " << op_sub(a, b) << "\n"; break;
                case 3: cout << "= " << op_mul(a, b) << "\n"; break;
                case 4: cout << "= " << op_div(a, b) << "\n"; break;
                case 5: cout << "= " << op_pow(a, b) << "\n"; break;
                case 6: cout << "= " << op_mod(a, b) << "\n"; break;
                default: cout << "Invalid choice\n";
            }
        } catch (const exception& e) {
            cout << "Error: " << e.what() << "\n";
        }
    }

    return 0;
}