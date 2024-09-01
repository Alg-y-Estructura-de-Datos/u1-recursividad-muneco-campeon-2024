#include <iostream>

using namespace std;

bool contieneDigito(int n, int d) {
    if (n == 0) {
        return false;
    }

    if (n % 10 == d) {
        return true;
    }

    return contieneDigito(n / 10, d);
}

int main() {
    int n, d;

    cout << "Ingrese un numero entero positivo: ";
    cin >> n;

    if (n < 0) {
        cout << "Error: Debe ingresar un numero entero positivo." << endl;
        return 1;
    }

    cout << "Ingrese un digito (0-9): ";
    cin >> d;

    if (d < 0 || d > 9) {
        cout << "Error: Debe ingresar un digito entre 0 y 9." << endl;
        return 1;
    }

    bool res = contieneDigito(n, d);

    if (res) {
        cout << "El digito " << d << " esta en el numero " << n << endl;
    } else {
        cout << "El digito " << d << " no esta en el numero " << n << endl;
    }

    return 0;
}
