#include <iostream>
using namespace std;
void calculatorAB(int n, int& a, int& b) {
    // Параметри-вказівники
    a = 0;
    b = 0;

    for (int i = 0; i <= n / 5; ++i) {
        int A = i;
        int B = (n - 5 * i) / 3;

        if (5 * A + 3 * B == n) {
            if (a + b == 0 || A + B < a + b) {
                a = A;
                b = B;
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter number n: ";
    cin >> n;

    int a, b;

    // Зовнішні змінні
    calculatorAB(n, a, b);

    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}