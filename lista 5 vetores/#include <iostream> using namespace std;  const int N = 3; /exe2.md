    #include <iostream>
    using namespace std;
    
    const int N = 3; // Tamanho da matriz (pode ser alterado)
    
    void lerMatriz(int matriz[N][N], const string& nome) {
        cout << "Digite os elementos da matriz " << nome << " (" << N << "x" << N << "):\n";
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < N; ++j) {
                cout << nome << "[" << i << "][" << j << "]: ";
                cin >> matriz[i][j];
            }
    }
    
    bool saoIguais(int A[N][N], int B[N][N]) {
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < N; ++j)
                if (A[i][j] != B[i][j])
                    return false;
        return true;
    }
    
    void somarMatrizes(int A[N][N], int B[N][N], int resultado[N][N]) {
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < N; ++j)
                resultado[i][j] = A[i][j] + B[i][j];
    }
    
    void subtrairMatrizes(int A[N][N], int B[N][N], int resultado[N][N]) {
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < N; ++j)
                resultado[i][j] = A[i][j] - B[i][j];
    }
    
    void multiplicarMatrizes(int A[N][N], int B[N][N], int resultado[N][N]) {
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < N; ++j) {
                resultado[i][j] = 0;
                for (int k = 0; k < N; ++k)
                    resultado[i][j] += A[i][k] * B[k][j];
            }
    }
    
    void imprimirMatriz(int matriz[N][N], const string& titulo) {
        cout << titulo << ":\n";
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j)
                cout << matriz[i][j] << "\t";
            cout << endl;
        }
    }
    
    int main() {
        int A[N][N], B[N][N];
        int soma[N][N], subtracao[N][N], multiplicacao[N][N];

    lerMatriz(A, "A");
    lerMatriz(B, "B");

    
    if (saoIguais(A, B))
        cout << "\nAs matrizes A e B são iguais.\n";
    else
        cout << "\nAs matrizes A e B são diferentes.\n";

  
    somarMatrizes(A, B, soma);
    imprimirMatriz(soma, "\nSoma (A + B)");

  
    multiplicarMatrizes(A, B, multiplicacao);
    imprimirMatriz(multiplicacao, "\nMultiplicação (A x B)");


    subtrairMatrizes(A, B, subtracao);
    imprimirMatriz(subtracao, "\nSubtração (A - B)");

    return 0;
    }
