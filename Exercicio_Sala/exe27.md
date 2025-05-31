    #include <iostream>
    using namespace std;
    
    int main() {
        const int TAM = 20;
        int vetor[TAM];

    cout << "Digite 20 números inteiros:\n";
    for (int i = 0; i < TAM; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetor[i];
    }

    cout << "\nVetor original:\n";
    for (int i = 0; i < TAM; i++) {
        cout << vetor[i] << " ";
    }

    for (int i = 0; i < TAM / 2; i++) {
        int temp = vetor[i];
        vetor[i] = vetor[TAM - 1 - i];
        vetor[TAM - 1 - i] = temp;
    }

    cout << "\n\nVetor após as trocas:\n";
    for (int i = 0; i < TAM; i++) {
        cout << vetor[i] << " ";
    }

    cout << endl;
    return 0;
    }
