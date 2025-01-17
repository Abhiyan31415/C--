#include<iostream>
using namespace std;

int fib(int num) {
    if(num == 0) {
        return 0;
    }
    if(num == 1) {
        return 1;
    }
    return fib(num - 1) + fib(num - 2);
}

int main() {
    int num;
    cout << "Enter the number for the Fibonacci series: " << endl;
    cin >> num;
    cout << "Fibonacci series: " << endl;
    for(int i = 0; i < num; i++) {
        cout << fib(i) << " ";
    }
    cout << endl;
    return 0;
}