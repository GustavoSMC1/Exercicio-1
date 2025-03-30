#include <iostream>

using namespace std;

int main() {
    double valor_hora, numero_aulas, percentual_inss;
    
    cout << "Digite o valor da hora-aula: R$ ";
    cin >> valor_hora;
    
    cout << "Digite o número de aulas dadas no mês: ";
    cin >> numero_aulas;
    
    cout << "Digite o percentual de desconto do INSS: ";
    cin >> percentual_inss;
    
    // Calculando o salário bruto
    double salario_bruto = valor_hora * numero_aulas;
    
    // Calculando o desconto do INSS
    double desconto_inss = salario_bruto * (percentual_inss / 100);
    
    // Calculando o salário líquido
    double salario_liquido = salario_bruto - desconto_inss;
    
    cout << "O salário bruto é: R$ " << salario_bruto << endl;
    cout << "O desconto do INSS é: R$ " << desconto_inss << endl;
    cout << "O salário líquido é: R$ " << salario_liquido << endl;
    
    return 0;
}
