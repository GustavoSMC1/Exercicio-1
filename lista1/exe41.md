#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int quantidadeFitas;
    double valorAluguel;
    
 
    cout << "Sistema de Gerenciamento da Locadora\n";
    cout << "-----------------------------------\n";
    cout << "Digite a quantidade de fitas: ";
    cin >> quantidadeFitas;
    
    cout << "Digite o valor do aluguel por fita: R$ ";
    cin >> valorAluguel;
    
   
    int fitasAlugadasPorMes = quantidadeFitas / 3;
    double faturamentoMensal = fitasAlugadasPorMes * valorAluguel;
    double faturamentoAnual = faturamentoMensal * 12;
    
   
    int fitasAtrasadasPorMes = fitasAlugadasPorMes / 10;
    double multasMensais = fitasAtrasadasPorMes * (valorAluguel * 0.1);
    
   
    int fitasEstragadas = quantidadeFitas * 0.02;
    int fitasRepostas = quantidadeFitas / 10;
    int fitasFinalAno = quantidadeFitas - fitasEstragadas + fitasRepostas;
    
   
    cout << fixed << setprecision(2);
    cout << "\nResultados:\n";
    cout << "a. Faturamento anual: R$ " << faturamentoAnual << endl;
    cout << "b. Valor ganho com multas por mês: R$ " << multasMensais << endl;
    cout << "c. Quantidade de fitas no final do ano: " << fitasFinalAno << endl;
    
    return 0;
}
