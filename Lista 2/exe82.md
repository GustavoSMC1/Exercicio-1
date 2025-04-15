    #include <iostream>
    using namespace std;

    int main() {
    float x, resultado;

    cout << "Digite o valor de x: ";
    cin >> x;

    
    if (x == 2) {
        cout << "Erro: não é possível calcular f(x) quando x = 2, pois divisão por zero não é permitida." << endl;
    } else {
        
        resultado = 8 / (2 - x);

        cout << "O valor de f(x) para x = " << x << " é: " << resultado << endl;
    }

    return 0;
    }
