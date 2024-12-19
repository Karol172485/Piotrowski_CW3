// Piotrowski_CW3.cpp.
//

#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Wprowadz pierwsza liczbe: ";
    cin >> num1;
    cout << "Wpisz znak operacji (+, -, *, /): ";
    cin >> operation;
    cout << "Wprowadz druga liczbe: ";
    cin >> num2;

    switch (operation) {
    case '+':
        cout << "Wynik: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Wynik: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Wynik: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0) {
            cout << "Wynik: " << num1 / num2 << endl;
        }
        else {
            cout << "Blad! Dzielenie przez 0 jest niedozwolone." << endl;
        }
        break;
    default:
        cout << "Nieprawidlowa operacja!" << endl;
    }

    return 0;
}