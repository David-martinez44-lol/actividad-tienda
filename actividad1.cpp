#include <iostream>
using namespace std;

long long potencia(int base, int exponente) {
    long long resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    int base, exponente;

    cout << "ingresa la base: ";
    cin >> base;
    cout << "ingresa el exponente: ";
    cin >> exponente;

    cout << "la respueta es: " << potencia(base, exponente) << endl;
    return 0;
}