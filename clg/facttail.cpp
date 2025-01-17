#include <iostream>

using namespace std;

int factorialHelper(int n, int accumulator) {
    if (n == 0 || n == 1) {
        return accumulator;
    }
    return factorialHelper(n - 1, n * accumulator);
}

int factorial(int n) {
    return factorialHelper(n, 1);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Factorial of " << number << " is " << factorial(number) << endl;
    return 0;
}