#include <iostream>

using namespace std;

int power(int num, int exp) {
    // Caso base: cualquier número elevado a la potencia 0 es 1
    if (exp == 0) {
        return 1;
    }
    // Caso recursivo: num^exp = num * num^(exp - 1)
    return num * power(num, exp - 1);
}

int main() {
    int num, exp;
    
    cout << "Ingrese un numero: ";
    cin >> num;
    cout << "Ingrese el exponente: ";
    cin >> exp;

    cout << num << " elevado a la " << exp << " es " << power(num, exp) << endl;

    return 0;
}
