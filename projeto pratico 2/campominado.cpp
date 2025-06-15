#include <iostream>
using namespace std;

const int N = 20;

bool dentroDosLimites(int i, int j) {
    return (i >= 0 && i < N && j >= 0 && j < N);
}

int main() {
    char campo[N][N];
    int resultado[N][N] = {0};

    cout << "Digite a matriz 20x20 (use '*' para bomba e '-' para vazio):\n";
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            cin >> campo[i][j];

    int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};


    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (campo[i][j] == '*') {
                resultado[i][j] = -1; 
                for (int k = 0; k < 8; ++k) {
                    int ni = i + dx[k];
                    int nj = j + dy[k];
                    if (dentroDosLimites(ni, nj) && campo[ni][nj] != '*')
                        resultado[ni][nj]++;
                }
            }
        }
    }

    cout << "\nResultado (matriz com contagem de bombas ao redor):\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (resultado[i][j] == -1)
                cout << "* ";
            else
                cout << resultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}



O problema consiste em criar uma simulação simplificada do jogo Campo Minado. O programa deve:

Ler uma matriz 20x20 contendo apenas dois caracteres:

'*' → célula com bomba

'-' → célula vazia (sem bomba)

Gerar como saída uma nova matriz de inteiros onde:

Cada célula mostra a quantidade de bombas ao redor (máximo 8 vizinhos)

Células que contêm bombas continuam marcadas como *

1. Leitura da matriz
A matriz campo de tamanho 20x20 é preenchida com os caracteres digitados pelo usuário.

2. Inicialização da matriz resultado
Outra matriz resultado do mesmo tamanho é criada e iniciada com todos os valores iguais a zero. Ela armazenará o número de bombas ao redor de cada célula.

3. Vetores de vizinhança
São utilizados dois vetores (dx e dy) que representam os deslocamentos relativos das 8 direções vizinhas (diagonal, cima, baixo, esquerda e direita).

4. Processamento
O programa percorre toda a matriz:

Quando encontra uma bomba (*), marca a posição correspondente em resultado com -1.

Para cada uma das 8 posições ao redor dessa bomba, verifica:

Se está dentro da matriz.

Se não é outra bomba.

Se sim, incrementa o valor naquela posição da matriz resultado.

5. Impressão
O programa imprime a matriz resultado, substituindo valores -1 por * (para manter a posição da bomba visível).


Dificuldades 
Foi necessário usar os vetores dx e dy para evitar múltiplas condições e deixar o código limpo.

A função dentroDosLimites foi criada para evitar acesso fora da matriz (segmentation fault).







