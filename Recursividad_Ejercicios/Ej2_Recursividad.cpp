#include <iostream>

using namespace std;

int sumNaturals(int num) {
    // Caso base: si n es 1, la suma es 1
    if (num == 1) {
        cout << num;
        return 1;
    }
    // Caso recursivo: n + suma de los primeros (n-1) números naturales
    cout << num << " + ";
    return num + sumNaturals(num - 1);
}

int main() {
    int num;

    cout << "Ingrese un numero natural: ";
    cin >> num;

    cout << "La suma de los primeros " << num << " numeros naturales es: ";
    int answer = sumNaturals(num);
    cout << " = " << answer << endl;

    return 0;
}
