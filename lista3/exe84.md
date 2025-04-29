#include <iostream>
#include <iomanip>  

using namespace std;

int main() {
    const double FATOR_CONVERSAO = 2.54;

    cout << "Conversão de Polegadas para Centímetros" << endl;
    cout << "----------------------------------------" << endl;
    cout << setw(10) << "Polegadas" << setw(15) << "Centímetros" << endl;
    cout << "----------------------------------------" << endl;

    for (int polegada = 1; polegada <= 20; ++polegada) {
        double centimetros = polegada * FATOR_CONVERSAO;
        cout << setw(10) << polegada << setw(15) << fixed << setprecision(2) << centimetros << endl;
    }

    return 0;
}
