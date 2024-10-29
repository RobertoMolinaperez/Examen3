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

#include <iostream>
using namespace std;

// Función recursiva para calcular el factorial
int factorial(int n) {
    if (n <= 1) {
        return 1;  // Caso base
    } else {
        return n * factorial(n - 1);  // Llamada recursiva
    }
}

// Función del cajero automático
void cajeroAutomatico() {
    int saldo = 20000;  // Saldo inicial de la cuenta
    int opcion, cantidad;

    do {
        cout << "\n--- Menú del Cajero Automático ---" << endl;
        cout << "1. Consultar saldo" << endl;
        cout << "2. Retirar efectivo" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Saldo actual: $" << saldo << endl;
                break;

            case 2:
                cout << "Ingrese la cantidad a retirar: ";
                cin >> cantidad;
                if (cantidad > saldo) {
                    cout << "Saldo insuficiente para realizar el retiro." << endl;
                } else {
                    saldo -= cantidad;
                    cout << "Retiro exitoso. Su nuevo saldo es: $" << saldo << endl;
                }
                break;

            case 3:
                cout << "Saliendo del cajero automático." << endl;
                break;

            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
                break;
        }
    } while (opcion != 3);
}

int main() {
    int opcionMenu;
    
    do {
        cout << "\n--- Menú Principal ---" << endl;
        cout << "1. Calcular Factorial" << endl;
        cout << "2. Usar Cajero Automático" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcionMenu;

        switch (opcionMenu) {
            case 1:
                int numero;
                cout << "Ingrese un número para calcular su factorial: ";
                cin >> numero;
                if (numero < 0) {
                    cout << "El factorial no está definido para números negativos." << endl;
                } else {
                    cout << "El factorial de " << numero << " es " << factorial(numero) << endl;
                }
                break;

            case 2:
                cajeroAutomatico();
                break;

            case 3:
                cout << "Saliendo del programa." << endl;
                break;

            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
                break;
        }
    } while (opcionMenu != 3);

    return 0;
}

#include <iostream>
using namespace std;

// Función recursiva para calcular el factorial
int factorial(int n) {
    if (n <= 1) {
        return 1;  // Caso base
    } else {
        return n * factorial(n - 1);  // Llamada recursiva
    }
}

// Función del cajero automático
void cajeroAutomatico() {
    int saldo = 20000;  // Saldo inicial de la cuenta
    int opcion, cantidad;

    do {
        cout << n--- Menú del Cajero Automático --- << endl;
        cout << 1. Consultar saldo << endl;
        cout << 2. Retirar efectivo << endl;
        cout << 3. Salir << endl;
        cout << Seleccione una opción: ;
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << Saldo actual:  << saldo << endl;
                break;

            case 2:
                cout << Ingrese la cantidad a retirar: ;
                cin >> cantidad;
                if (cantidad > saldo) {
                    cout << Saldo insuficiente para realizar el retiro. << endl;
                } else {
                    saldo -= cantidad;
                    cout << Retiro exitoso. Su nuevo saldo es:  << saldo << endl;
                }
                break;

            case 3:
                cout << Saliendo del cajero automático. << endl;
                break;

            default:
                cout << Opción inválida. Intente nuevamente. << endl;
                break;
        }
    } while (opcion != 3);
}

int main() {
    int opcionMenu;
    
    do {
        cout << n--- Menú Principal --- << endl;
        cout << 1. Calcular Factorial << endl;
        cout << 2. Usar Cajero Automático << endl;
        cout << 3. Salir << endl;
        cout << Seleccione una opción: ;
        cin >> opcionMenu;

        switch (opcionMenu) {
            case 1:
                int numero;
                cout << Ingrese un número para calcular su factorial: ;
                cin >> numero;
                if (numero < 0) {
                    cout << El factorial no está definido para números negativos. << endl;
                } else {
                    cout << El factorial de  << numero <<  es  << factorial(numero) << endl;
                }
                break;

            case 2:
                cajeroAutomatico();
                break;

            case 3:
                cout << Saliendo del programa. << endl;
                break;

            default:
                cout << Opción inválida. Intente nuevamente. << endl;
                break;
        }
    } while (opcionMenu != 3);

    return 0;
}

