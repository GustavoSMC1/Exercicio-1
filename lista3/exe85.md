    #include <iostream>
    #include <iomanip>

    using namespace std;

    int main() {
    int inicio, fim;

    cout << "Conversão de Fahrenheit para Celsius" << endl;
    cout << "------------------------------------" << endl;

    
    cout << "Digite o valor inicial em Fahrenheit: ";
    cin >> inicio;
    cout << "Digite o valor final em Fahrenheit: ";
    cin >> fim;

    
    cout << setw(12) << "Fahrenheit" << setw(12) << "Celsius" << endl;
    cout << "-----------------------------" << endl;

    for (int f = inicio; f <= fim; ++f) {
        double c = 5.0 * (f - 32) / 9.0;  // fórmula correta
        cout << setw(12) << f << setw(12) << fixed << setprecision(2) << c << endl;
    }

    return 0;
    }
