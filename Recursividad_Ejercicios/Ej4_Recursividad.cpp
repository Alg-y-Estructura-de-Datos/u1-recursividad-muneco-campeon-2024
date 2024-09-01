#include <iostream>
#include <vector>

using namespace std;

int findBigger(const vector<int>& vec, int n) {
    // Caso base: si el vector tiene un solo elemento, ese es el mayor
    if (n == 1) {
        return vec[0];
    }
    // Caso recursivo: comparar el último elemento con el mayor del subvector anterior
    return max(vec[n-1], findBigger(vec, n-1));
}

int main() {
    int n;

    cout << "Ingrese el tamano del vector: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "El tamano del vector debe ser mayor que 0." << endl;
        return 1;
    }

    vector<int> vec(n);

    cout << "Ingrese los elementos del vector:" << endl;

    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }

    int mayor = findBigger(vec, n);
    cout << "El mayor elemento del vector es: " << mayor << endl;

    return 0;
}
