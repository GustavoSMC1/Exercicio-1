    #include <iostream>
    using namespace std;
    
    int main() {
        const int TAM = 10;
        int matriz[TAM][TAM];
        long long produto = 1;

    cout << "Digite os elementos da matriz 10x10:\n";
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < i; j++) {  
            produto *= matriz[i][j];
        }
    }

    cout << "\nProduto dos elementos abaixo da diagonal principal: " << produto << endl;

    return 0;
    }
