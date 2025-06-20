#include <iostream>
#include <cstdlib>  
#include <ctime>     
using namespace std;

int main() {
    int testes[] = {50, 100, 500, 1000, 10000, 100000};  
    srand(time(0));  

    for (int t = 0; t < 6; ++t) {
        int totalLancamentos = testes[t];
        int contador = 0;

        for (int i = 0; i < totalLancamentos; ++i) {
            int dado1 = rand() % 6 + 1;
            int dado2 = rand() % 6 + 1;

            if (dado1 == 6 && dado2 == 6)
                contador++;
        }

        double probabilidade = (double)contador / totalLancamentos;
        cout << "Lançamentos: " << totalLancamentos
             << " | Quantidade de 6 e 6: " << contador
             << " | Probabilidade: " << probabilidade << endl;
    }

    return 0;
}



O programa realiza as seguintes operações:

Define um vetor com diferentes quantidades de lançamentos de dados a serem testados: {50, 100, 500, 1000, 10000, 100000}.

Inicializa a semente do gerador de números aleatórios com srand(time(0)), garantindo resultados diferentes a cada execução.

Para cada valor no vetor:

Realiza a quantidade correspondente de lançamentos de dois dados (simulados com rand() % 6 + 1).

Conta quantas vezes os dois dados mostraram o número 6 simultaneamente.

Calcula a probabilidade experimental dividindo o número de sucessos pelo número total de lançamentos.

Imprime o número de lançamentos, o número de vezes que saiu "6 e 6", e a probabilidade experimental.

Suposições Necessárias
Cada dado é um dado comum de 6 faces, com valores uniformemente distribuídos de 1 a 6.

Os dois dados são lançados independentemente.

A função rand() é suficientemente aleatória para a simulação.

A precisão da estimativa da probabilidade melhora conforme o número de lançamentos aumenta.



Exemplos de Execução
Lançamentos: 50 | Quantidade de 6 e 6: 0 | Probabilidade: 0
Lançamentos: 100 | Quantidade de 6 e 6: 1 | Probabilidade: 0.01
Lançamentos: 500 | Quantidade de 6 e 6: 2 | Probabilidade: 0.004
Lançamentos: 1000 | Quantidade de 6 e 6: 3 | Probabilidade: 0.003
Lançamentos: 10000 | Quantidade de 6 e 6: 31 | Probabilidade: 0.0031
Lançamentos: 100000 | Quantidade de 6 e 6: 278 | Probabilidade: 0.00278

Dificuldades Encontradas
Aleatoriedade do rand()
