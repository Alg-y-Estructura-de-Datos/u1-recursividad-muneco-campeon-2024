#include <iostream>

using namespace std;

void invertNum(int num) {
    // Caso base: cuando n es 0, detener la recursión
    if (num == 0) {
        return;
    }
    // Mostrar el último dígito
    cout << num % 10;
    // Llamar recursivamente con el número reducido (sin el último dígito)
    invertNum(num / 10);
}

int main() {
    int num;
    
    cout << "Ingrese un numero entero: ";
    cin >> num;


    if (num < 0) {
        cout << "Error: No se permiten numeros negativos." << endl;
    } else {
        cout << "Numero original: " << num << endl;
        cout << "Numero invertido: ";
        if (num == 0) {
            cout << "0";
        } 
        else 
        {
            invertNum(num);
        }
        cout << endl;
    }

    return 0;
}
