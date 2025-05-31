    #include <iostream>
    using namespace std;
    
    int main() {
        const int TAM = 30;
        int vetor[TAM];

    cout << "Digite 30 números inteiros:\n";
    for (int i = 0; i < TAM; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> vetor[i];
    }

    cout << "\nValores na ordem inversa:\n";
    for (int i = TAM - 1; i >= 0; i--) {
        cout << vetor[i] << " ";
    }

    cout << endl;
    return 0;
    }
