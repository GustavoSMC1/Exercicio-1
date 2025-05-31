    #include <iostream>
    #include <algorithm> 
    using namespace std;
    
    int main() {
        const int TAM = 10;
        int numeros[TAM];

    cout << "Digite 10 números inteiros:\n";
    for (int i = 0; i < TAM; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    sort(numeros, numeros + TAM);

    cout << "\nNúmeros em ordem crescente:\n";
    for (int i = 0; i < TAM; i++) {
        cout << numeros[i] << " ";
    }

    cout << endl;
    return 0;
    }
    
