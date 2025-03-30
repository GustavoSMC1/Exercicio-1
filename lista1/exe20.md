#include <iostream>

using namespace std;

int main() {
    double salario_minimo, quilowatts_gastos;
    
    cout << "Digite o valor do salário mínimo: ";
    cin >> salario_minimo;
    
    cout << "Digite a quantidade de quilowatts consumida: ";
    cin >> quilowatts_gastos;
    
    double valor_por_kw = (salario_minimo / 7) / 100;
    double valor_total = quilowatts_gastos * valor_por_kw;
    double valor_com_desconto = valor_total * 0.9;
    
    cout << "O valor de cada quilowatt é: R$ " << valor_por_kw << endl;
    cout << "O valor total a ser pago é: R$ " << valor_total << endl;
    cout << "O valor com desconto de 10% é: R$ " << valor_com_desconto << endl;
    
    return 0;
}
