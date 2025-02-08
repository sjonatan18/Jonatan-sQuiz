#include <iostream>
using namespace std;

int main() {
    double peso, altura, bmi;

    cout << "Ingrese el peso en kilogramos: ";
    cin >> peso;

    cout << "Ingrese la altura en metros: ";
    cin >> altura;

    bmi = peso / (altura * altura);

    cout << "Su BMI es: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Bajo peso" << endl;
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        cout << "Normal" << endl;
    } else if (bmi >= 25 && bmi <= 29.9) {
        cout << "Sobrepeso" << endl;
    } else {
        cout << "Obeso" << endl;
    }

    return 0;
}