#include<iostream>
using namespace std;

int main() {
    int A, B;
    char op;   // op should be char, not int

    cout << "Enter the value of A: " << endl;
    cin >> A;

    cout << "Enter the value of B: " << endl;
    cin >> B;

    cout << "Enter the operation (+, -, *, /, %): " << endl;
    cin >> op;

    switch(op) {

        case '+': cout << (A + B) << endl;
                  break;

        case '-': cout << (A - B) << endl;
                  break;

        case '*': cout << (A * B) << endl;
                  break;

        case '/': 
                  if(B != 0)
                      cout << (A / B) << endl;
                  else
                      cout << "Division by zero not allowed" << endl;
                  break;

        case '%': 
                  if(B != 0)
                      cout << (A % B) << endl;
                  else
                      cout << "Modulo by zero not allowed" << endl;
                  break;

        default: cout << "Please enter a valid operation" << endl;
    }

    return 0;
}
