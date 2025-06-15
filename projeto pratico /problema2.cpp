#include <iostream>
#include <cstdlib>  
#include <ctime>     
using namespace std;

int main() {
    char jogarNovamente = 's';
    srand(time(0));  

    while (jogarNovamente == 's' || jogarNovamente == 'S') {
        int numeroSecreto = rand() % 100 + 1;  
        int palpite, tentativas = 0;

        cout << "\nPensei em um número entre 1 e 100. Adivinhe qual é!\n";

        do {
            cout << "Seu palpite: ";
            cin >> palpite;
            tentativas++;

            if (palpite < numeroSecreto) {
                cout << "Não, o número que pensei é maior. Tente outro.\n";
            } else if (palpite > numeroSecreto) {
                cout << "Não, o número que pensei é menor. Tente outro.\n";
            } else {
                if (tentativas == 1)
                    cout << "Isso! Seu sortudo, acertou de primeira!\n";
                else
                    cout << "Isso! Você acertou com " << tentativas << " tentativas!\n";
            }
        } while (palpite != numeroSecreto);

        cout << "Quer jogar de novo (s/n)? ";
        cin >> jogarNovamente;
    }

    cout << "Ok, nos vemos mais tarde quando quiser jogar de novo.\n";
    return 0;
}


Inicialização:

A função srand(time(0)) define a semente do gerador de números aleatórios, garantindo que a cada execução o número secreto seja diferente.

A variável jogarNovamente é usada para controlar se o jogo deve reiniciar.

Laço de Jogo Principal:

Enquanto jogarNovamente for 's' ou 'S', o programa continua a executar novas rodadas do jogo.

Um número aleatório entre 1 e 100 é gerado usando rand() % 100 + 1.

Loop de Tentativas:

O jogador é solicitado a digitar um palpite.

O programa compara o palpite com o número secreto e fornece dicas: se é maior ou menor.

O número de tentativas é contado.

O loop se encerra quando o jogador acerta.

Feedback e Repetição:

Ao acertar, o programa exibe uma mensagem, diferenciando se o jogador acertou de primeira ou após várias tentativas.

Em seguida, o jogador pode escolher jogar novamente ou sair.

Suposições Necessárias
O número secreto está sempre entre 1 e 100.

O usuário fornece uma entrada numérica válida (não trata entradas inválidas).

A interação é feita via terminal (modo texto).

A entrada de repetição do jogo é uma letra ('s', 'S', 'n', 'N').}

Exemplos de Execução
Pensei em um número entre 1 e 100. Adivinhe qual é!
Seu palpite: 50
Não, o número que pensei é maior. Tente outro.
Seu palpite: 75
Não, o número que pensei é menor. Tente outro.
Seu palpite: 62
Não, o número que pensei é maior. Tente outro.
Seu palpite: 68
Isso! Você acertou com 4 tentativas!
Quer jogar de novo (s/n)? n
Ok, nos vemos mais tarde quando quiser jogar de novo.

Exemplo 2: Jogador acerta de primeira
Pensei em um número entre 1 e 100. Adivinhe qual é!
Seu palpite: 27
Isso! Seu sortudo, acertou de primeira!
Quer jogar de novo (s/n)? n
Ok, nos vemos mais tarde quando quiser jogar de novo.
