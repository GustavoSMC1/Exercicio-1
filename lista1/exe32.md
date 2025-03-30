#include <iostream>

using namespace std;

int main() {
    double valor, taxa, tempo;
    
  
    cout << "Digite o valor da prestação: R$ ";
    cin >> valor;
    
    cout << "Digite a taxa de juros (%): ";
    cin >> taxa;
    
    cout << "Digite o tempo de atraso (em meses): ";
    cin >> tempo;
    

    double prestacao = valor + (valor * (taxa / 100) * tempo);
    

    cout << "O valor da prestação em atraso é: R$ " << prestacao << endl;
    
    return 0;
}
