    #include <iostream>
    using namespace std;

    int main() {
    int numeros[5];

    cout << "Digite cinco números inteiros diferentes:\n";
    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
    }

    int maior = numeros[0];
    int menor = numeros[0];

    
    for (int i = 1; i < 5; i++) {
        if (numeros[i] > maior)
            maior = numeros[i];
        if (numeros[i] < menor)
            menor = numeros[i];
    }

    cout << "Maior valor: " << maior << endl;
    cout << "Menor valor: " << menor << endl;

    return 0;
    }
