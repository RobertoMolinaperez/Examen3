#include <iostream>
using namespace std;

// Función recursiva para calcular el factorial
int factorial(int n) {
    if (n <= 1) {
        return 1;  // Caso base: factorial de 0 o 1 es 1
    } else {
        return n * factorial(n - 1);  // Llamada recursiva
    }
}

int main() {
    int num;

    cout << "Ingrese un número para calcular su factorial: ";
    cin >> num;

    if (num < 0) {
        cout << "El factorial no está definido para números negativos." << endl;
    } else {
        int result = factorial(num);
        cout << "El factorial de " << num << " es " << result << endl;
    }

    return 0;
}

