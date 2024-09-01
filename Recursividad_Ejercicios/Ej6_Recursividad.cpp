#include <iostream>
#include <cmath>

using namespace std;

int function(int n, int pos = 1) {
    if (n == 0) {
        return 0;
    }

    int dig = n % 10;
    int cuenta = 0;
    
    if (pos % 2 != 0 && dig % 2 == 0) {
        cuenta = 1;
    }

    return cuenta + function(n / 10, pos + 1);
}

int main() {
    int n;

    cout << "Ingrese un numero entero positivo: ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: Debe ingresar un numero entero positivo." << endl;
        return 1;
    }

    int res = function(n);
    cout << "Cantidad de digitos pares en posiciones impares: " << res << endl;

    return 0;
}
