#include <iostream>
#include <string>
#include "operations.h"

using namespace std;

const string VERSION = "v1.1.0";

void printMenu() {
    cout << "=== Calculator " << VERSION << " ===\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Power\n";
    cout << "6. Modulo\n";
    cout << "0. Exit\n";
}

int main() {
    cout << "Welcome to the calculator!\n";
    printMenu();
    return 0;
}