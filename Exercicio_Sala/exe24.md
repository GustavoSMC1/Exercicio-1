    #include <iostream>
    using namespace std;
    
    int main() {
        const int TAM = 5;
        int A[TAM], B[TAM], SOMA[TAM];

    cout << "Digite 5 valores para o vetor A:\n";
    for (int i = 0; i < TAM; i++) {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }

    cout << "\nDigite 5 valores para o vetor B:\n";
    for (int i = 0; i < TAM; i++) {
        cout << "B[" << i << "]: ";
        cin >> B[i];
    }

    for (int i = 0; i < TAM; i++) {
        SOMA[i] = A[i] + B[i];
    }

    cout << "\nVetor SOMA:\n";
    for (int i = 0; i < TAM; i++) {
        cout << "SOMA[" << i << "] = " << SOMA[i] << endl;
    }

    return 0;
    }
