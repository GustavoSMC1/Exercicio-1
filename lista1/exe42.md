#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int conta;
    

    cout << "Calculadora de Dígito Verificador de Conta Corrente\n";
    cout << "--------------------------------------------------\n";
    cout << "Digite o número da conta (3 dígitos): ";
    cin >> conta;
    

    if (conta < 100 || conta > 999) {
        cout << "Erro: A conta deve ter exatamente 3 dígitos.\n";
        return 1;
    }
    

    string strConta = to_string(conta);
    string strInverso = strConta;
    reverse(strInverso.begin(), strInverso.end());
    int inverso = stoi(strInverso);
    

    int soma = conta + inverso;
    

    string strSoma = to_string(soma);
    

    while (strSoma.length() < 3) {
        strSoma = "0" + strSoma;
    }
    

    int somaPonderada = 0;
    for (int i = 0; i < 3; i++) {
        int digito = strSoma[i] - '0';
        somaPonderada += digito * (i + 1);
    }
    

    int digitoVerificador = somaPonderada % 10;
    

    cout << "\nResultados:\n";
    cout << "Número da conta: " << conta << endl;
    cout << "Inverso: " << inverso << endl;
    cout << "Soma: " << soma << endl;
    cout << "Soma ponderada: " << somaPonderada << endl;
    cout << "Dígito verificador: " << digitoVerificador << endl;
    
    return 0;
}
