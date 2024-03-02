#include <iostream>
using namespace std;
int main(){
    int numero = 0;
    while (numero <= 30 || numero % 2 == 0) {
        numero += 3;
    }
    cout << "El primer número impar después de 30 es: "<<numero <<endl;
    return 0;

}
