// need time
#include <iostream>

using namespace std;

class Calculator {
    int x;
    float a, b;
public:

    // Function to display arithmetic operations
    void arithmetic() {
        // Loop until user exits
        do {
            cout << "\n\n\t1. ADDITION:";
            cout << "\n\t2. SUBTRACTION:";
            cout << "\n\t3. MULTIPLICATION:";
            cout << "\n\t4. DIVISION:";
            cout << "\n\t5. EXIT";
            cout << "\n\tCHOOSE: ";
            cin >> x;

            switch (x) {
                case 1: cout << "\n\tADDITION OF TWO NUMBERS IS: " << a + b; break;
                case 2: cout << "\n\tSUBTRACTION OF TWO NUMBERS IS: " << a - b; break;
                case 3: cout << "\n\tMULTIPLICATION OF TWO NUMBERS IS: " << a * b; break;
                case 4: 
                    if (b != 0) {
                        cout << "\n\tDIVISION OF TWO NUMBERS IS: " << a / b;
                    } else {
                        cout << "\n\tDIVISION BY ZERO IS NOT ALLOWED!";
                    }
                    break;
                case 5: cout << "\n\t\tSUCCESSFULLY EXIT"; break;
                default: cout << "\n\t\tWRONG INPUT"; break;
            }
        } while (x != 5);
    }

    // Function to take two numbers
    void simpleCalculator() {
        cout << "\t\tCALCULATOR";
        cout << "\n\tENTER TWO NUMBERS: ";
        cin >> a >> b;
        arithmetic(); // Function call
    }
};

int main() {
    Calculator c;
    c.simpleCalculator();
    return 0;
}
