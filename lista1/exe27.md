#include <iostream>

using namespace std;

int main() {
    double valor_produto, desconto;
    
    cout << "Digite o valor do produto: ";
    cin >> valor_produto;
    
    cout << "Digite o valor do desconto (em porcentagem): ";
    cin >> desconto;
    
    double valor_com_desconto = valor_produto - (valor_produto * desconto / 100);
    
    cout << "O valor com o desconto de " << desconto << "% é: R$ " << valor_com_desconto << endl;
    
    return 0;
}
