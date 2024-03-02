#include <iostream>
using namespace std;
int main() {
    int a = 0, b = 0;
    for (int i = 0; i <= 50; ++i) {
        if (i % 2 == 0) {
            b += i;
        } else {
            a += i;
        }
    }
    cout << "La suma de numero impares es:" << a << endl;
    cout << "La suma de numeros pares es:" << b << endl;
    return 0;
}