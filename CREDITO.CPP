#include <iostream>
using namespace std;

int main() {
    int numeroCuenta, saldoInicial, totalCargos, totalCreditos, limiteCredito, nuevoSaldo;

    cout << "Ingrese el número de cuenta: ";
    cin >> numeroCuenta;

    cout << "Ingrese el saldo inicial: ";
    cin >> saldoInicial;

    cout << "Ingrese el total de cargos: ";
    cin >> totalCargos;

    cout << "Ingrese el total de créditos: ";
    cin >> totalCreditos;

    cout << "Ingrese el límite de crédito: ";
    cin >> limiteCredito;

    nuevoSaldo = saldoInicial + totalCargos - totalCreditos;

    cout << "El nuevo saldo es: " << nuevoSaldo << endl;

    if (nuevoSaldo > limiteCredito) {
        cout << "Se excedió el límite de su crédito" << endl;
    }

    return 0;
}