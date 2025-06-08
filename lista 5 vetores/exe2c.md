    #include <iostream>
    #include <iomanip>
    using namespace std;
    
    const int N = 20;
    
    int main() {
        double matriz[N][N];
        double soma[8] = {0};
        int cont[8] = {0};

    cout << "Digite os elementos da matriz 20x20:\n";
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }

    for (int i = 1; i < N; i++)
        for (int j = 0; j < i; j++) {
            soma[0] += matriz[i][j];
            cont[0]++;
        }

    for (int i = 0; i < N - 1; i++)
        for (int j = i + 1; j < N; j++) {
            soma[1] += matriz[i][j];
            cont[1]++;
        }

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (i + j > N - 1) {
                soma[2] += matriz[i][j];
                cont[2]++;
            }


    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (i + j < N - 1) {
                soma[3] += matriz[i][j];
                cont[3]++;
            }


    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (i != j && i + j != N - 1) {
                soma[4] += matriz[i][j];
                cont[4]++;
            }


    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (i == j || i + j == N - 1) {
                soma[5] += matriz[i][j];
                cont[5]++;
            }


    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            if ((i < N / 2 && j < N / 2) || (i >= N / 2 && j >= N / 2)) {
                soma[6] += matriz[i][j];
                cont[6]++;
            }
        }


    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            if (i <= j && i + j <= N - 1) {
                soma[7] += matriz[i][j];
                cont[7]++;
            }
        }


    cout << fixed << setprecision(2);
    for (int i = 0; i < 8; i++) {
        cout << "Media " << char('a' + i) << ") = " << (soma[i] / cont[i]) << endl;
    }

    return 0;
}
