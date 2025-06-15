#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Locacao {
    string placa;
    string modelo;
    int dias;
    float valor;
};

int main() {
    const int MAX_LOCACOES = 300;
    int numLocacoes;
    float caixaInicial;

    cout << "Digite o valor inicial do caixa: R$ ";
    cin >> caixaInicial;

    cout << "Digite o número de locações realizadas no dia (máximo 300): ";
    cin >> numLocacoes;
    if (numLocacoes > MAX_LOCACOES) {
        cout << "Número de locações excede o limite diário!" << endl;
        return 1;
    }

    vector<Locacao> locacoes(numLocacoes);
    map<string, int> contagemModelos;
    map<string, float> valorPorModelo;
    float totalRecebido = 0.0;

    for (int i = 0; i < numLocacoes; i++) {
        cout << "\nLocação " << i + 1 << ":\n";
        cout << "Placa: ";
        cin >> locacoes[i].placa;

        cout << "Modelo: ";
        cin.ignore();
        getline(cin, locacoes[i].modelo);

        cout << "Dias alugado: ";
        cin >> locacoes[i].dias;

        cout << "Valor pago: R$ ";
        cin >> locacoes[i].valor;

        totalRecebido += locacoes[i].valor;
        contagemModelos[locacoes[i].modelo]++;
        valorPorModelo[locacoes[i].modelo] += locacoes[i].valor;
    }

    float caixaFinal = caixaInicial + totalRecebido;

    cout << "\n================ RELATÓRIO DO DIA ================\n";
    cout << fixed << setprecision(2);
    cout << "Total recebido: R$ " << totalRecebido << endl;
    cout << "Valor final em caixa: R$ " << caixaFinal << endl;


    vector<pair<string, int>> modelosOrdenados(contagemModelos.begin(), contagemModelos.end());

    sort(modelosOrdenados.begin(), modelosOrdenados.end(),
         [](const pair<string, int>& a, const pair<string, int>& b) {
             return b.second < a.second; 
         });

    cout << "\nTop 10 modelos mais alugados:\n";
    cout << left << setw(20) << "Modelo" << setw(10) << "Alugueis" << "Valor Recebido\n";

    int count = 0;
    for (const auto& modelo : modelosOrdenados) {
        cout << left << setw(20) << modelo.first
             << setw(10) << modelo.second
             << "R$ " << valorPorModelo[modelo.first] << endl;
        if (++count == 10) break;
    }

    return 0;
}



struct para organizar dados da locação.

map<string, int> para contar aluguéis por modelo.

map<string, float> para somar o valor recebido por modelo.

vector e sort com lambda para ordenar os modelos.

iomanip para formatação de saída com casas decimais e colunas alinhadas.

Entradas Iniciais

Lê o valor inicial do caixa.

Lê a quantidade de locações (máximo de 300).

Estrutura para Armazenar Locação

Struct Locacao: armazena placa, modelo, dias, valor.

Leitura das locações

Para cada locação:

Lê os dados.

Soma ao total recebido.

Atualiza a contagem de aluguéis por modelo.

Acumula o valor recebido por modelo.

Relatório

Calcula o valor final do caixa.

Ordena os modelos mais alugados (por quantidade de aluguéis).

Exibe os 10 modelos mais alugados com:

Nome do modelo

Quantidade de aluguéis

Total recebido por modelo
