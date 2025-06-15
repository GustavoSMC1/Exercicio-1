#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Digite o numero de candidadtos: ";
    cin >> n;

    vector<int> votos(n);
    cout << "Digite os " << n << " votos dos alunos: ";
    for (int i = 0; i < n; ++i) {
        cin >> votos[i];
    }

    map<int, int> contagem;

    for (int voto : votos) {
        contagem[voto]++;
    }

    int representante = -1, vice = -1;
    int votos_representante = -1, votos_vice = -1;

    for (const auto& par : contagem) {
        int aluno = par.first;
        int num_votos = par.second;

        if (num_votos > votos_representante) {
            vice = representante;
            votos_vice = votos_representante;

            representante = aluno;
            votos_representante = num_votos;
        } else if (num_votos > votos_vice) {
            vice = aluno;
            votos_vice = num_votos;
        }
    }

    cout << "Representante da turma sera o aluno " << representante
         << ", que obteve " << votos_representante << " votos." << endl;

    if (vice != -1)
        cout << "Vice-representante sera o aluno " << vice
             << ", que obteve " << votos_vice << " votos." << endl;
    else
        cout << "Nao ha vice-representante, pois apenas um aluno foi votado." << endl;

    return 0;
}





              O programa executa os seguintes passos:
              
              Entrada de Dados:
              
              O número total de alunos é informado pelo usuário.
              
              Em seguida, o usuário digita os votos dados por cada aluno (um número por aluno, totalizando N votos).
              
              Contagem dos Votos:
              
              Utiliza-se uma estrutura map<int, int> para associar cada aluno (chave) à quantidade de votos recebidos (valor).
              
              Determinação do Representante e Vice:
              
              Percorre-se o mapa de contagem para encontrar os dois alunos mais votados.
              
              O aluno com o maior número de votos é designado como representante.
              
              O segundo colocado é designado como vice-representante.
              
              Saída:

              O programa exibe o número do aluno eleito como representante e vice, com o número de votos recebidos por cada um.

              Exemplo 1: Funcionamento normal
                Entrada:
                Digite o numero de alunos: 15  
                Digite os 15 votos dos alunos: 3 7 8 10 10 2 3 10 14 7 3 1 3 6 14
                Saída:
                Representante da turma sera o aluno 3, que obteve 4 votos.  
                Vice-representante sera o aluno 10, que obteve 3 votos.
              Dificuldades Encontradas
              Lidar com empates foi um ponto desafiador, pois o map não garante uma ordem baseada em tempo de voto ou prioridade.
              
              Escolher a estrutura correta para contagem dos votos — o map foi ideal pela sua simplicidade e ordenação por chave.
