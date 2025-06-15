#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int MAX_ALUNOS = 50;
const int NUM_PROVAS = 5;

int main() {
    int numAlunos;
    string nomes[MAX_ALUNOS];
    int notas[MAX_ALUNOS][NUM_PROVAS];
    int totais[MAX_ALUNOS];
    string resultados[MAX_ALUNOS];

    cout << "Quantos alunos tem a turma? ";
    cin >> numAlunos;
    cin.ignore(); // Limpa o buffer do teclado

    
    cout << "Escreva os nomes dos alunos (1 por linha):" << endl;
    for (int i = 0; i < numAlunos; ++i) {
        getline(cin, nomes[i]);
    }


    for (int i = 0; i < numAlunos; ++i) {
        cout << "Escreva as notas do aluno " << nomes[i] << ": ";
        int soma = 0;
        for (int j = 0; j < NUM_PROVAS; ++j) {
            cin >> notas[i][j];
            soma += notas[i][j];
        }
        totais[i] = soma;

  
        if (soma >= 60) {
            resultados[i] = "Aprovado";
        } else if (soma < 40) {
            resultados[i] = "Reprovado";
        } else {
            resultados[i] = "Recuperacao";
        }
    }

   
    cout << "\n===============RESULTADO FINAL===============\n";
    for (int i = 0; i < numAlunos; ++i) {
        cout << left << setw(12) << nomes[i];
        for (int j = 0; j < NUM_PROVAS; ++j) {
            cout << setw(3) << notas[i][j] << " ";
        }
        cout << setw(4) << totais[i] << " ";
        cout << resultados[i] << endl;
    }
    cout << "=============================================\n";

    return 0;
}



Descrição do Problema
A professora de matemática realizou 5 provas com valor máximo de 20 pontos cada, totalizando até 100 pontos possíveis por aluno. O objetivo é calcular a nota total de cada aluno e determinar sua situação no final do ano letivo:

Aprovado: se a nota total for 60 ou mais;

Recuperação: se a nota for entre 40 e 59;

Reprovado: se for menor que 40.

O programa deve:

Ler o número de alunos da turma (máximo de 50),

Solicitar o nome de cada aluno,

Coletar as 5 notas,

Calcular a nota total e classificar cada aluno,

Exibir os resultados finais em formato de tabela, como mostrado na imagem fornecida.

Explicação do Funcionamento do Programa
O programa executa as seguintes etapas:

Entrada de Dados:

Pergunta ao usuário quantos alunos há na turma.

Recebe o nome de cada aluno.

Para cada aluno, recebe as 5 notas das provas.

Processamento:

Soma as 5 notas para cada aluno.

Classifica cada aluno conforme a soma:

>= 60 → "Aprovado"

< 40 → "Reprovado"

entre 40 e 59 → "Recuperacao"

Saída Formatada:

Exibe uma tabela com o nome, as 5 notas, total e o resultado de cada aluno.

Exemplos de Execução
Quantos alunos tem a turma? 3
Escreva os nomes dos alunos (1 por linha):
Ana
Bruno
Carla
Escreva as notas do aluno Ana: 20 19 20 20 18
Escreva as notas do aluno Bruno: 10 9 8 7 6
Escreva as notas do aluno Carla: 5 5 4 10 3
Saída:
===============RESULTADO FINAL===============
Ana         20 19 20 20 18 97  Aprovado
Bruno       10 9  8  7  6  40  Recuperacao
Carla       5  5  4 10 3  27  Reprovado
=============================================

Dificuldades Encontradas
Formatação da saída: foi necessário usar iomanip e setw() para alinhar os dados como em uma tabela.

Leitura de nomes compostos: ao usar cin, apenas a primeira palavra era lida. Isso foi resolvido com getline(cin, nomes[i]).
