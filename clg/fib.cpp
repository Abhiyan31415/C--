#include<iostream>
using namespace std;

int fibHelper(int num, int a, int b) {
    if(num == 0) {
        return a;
    }
    if(num == 1) {
        return b;
    }
    return fibHelper(num - 1, b, a + b);
}

int fib(int num) {
    return fibHelper(num, 0, 1);
}

int main() {
    int num;
    cout << "Enter the number for the Fibonacci series: " << endl;
    cin >> num;
    cout << "Fibonacci number at position " << num << " is: " << fib(num) << endl;
    return 0;
}