#include <iostream>
using namespace std;

bool esprimo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "ingresa un numero: " << endl;
    cin >> n;

    if (esprimo(n)) {
        cout << "primo" << endl;
    } else {
        cout << "no primo" << endl;
    }
    return 0;
}