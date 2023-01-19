#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string symb;
    float a, b;
    float x, n;
    cout << "Welcome to the Akbar's calculator!\n";
    cout << "Choose your operator: \n";
    cout << "'/'," << " '*'," << " '+',"  << " '-'" << " 'X^n'" "\n";
    cin >> symb;
    if(symb == "/") {
        cout << "Input your values: ";
        cin >> a >> b;
        cout << "The answer is: " << a / b;
    }else if(symb == "*") {
        cout << "Input your values: ";
        cin >> a >> b;
        cout << "The answer is: " << a * b;
    }else if(symb == "+") {
        cout << "Input your values: ";
        cin >> a >> b;
        cout << "The answer is: " << a + b;
    }else if(symb == "-") {
        cout << "Input your values: ";
        cin >> a >> b;
        cout << "The answer is: " << a - b;
    }else if(symb == "X^n") {
        cout << "Indicate the number and degree: ";
        cin >> x >> n;
        cout << "The answer is: " << pow(x, n) << "\n";
    }
    return 0;
}
