#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome;
    
    cout << "Digite um nome: ";
    cin >> nome;
    
    cout << "Nome completo: " << nome << endl;
    cout << "Primeiro caractere: " << nome[0] << endl;
    cout << "Último caractere: " << nome[nome.length() - 1] << endl;
    cout << "Do primeiro até o terceiro: " << nome.substr(0, 3) << endl;
    cout << "Quinto caractere: " << (nome.length() >= 5 ? string(1, nome[4]) : "Não há quinto caractere") << endl;
    cout << "Todos menos o primeiro: " << nome.substr(1) << endl;
    cout << "Os dois últimos: " << (nome.length() >= 2 ? nome.substr(nome.length() - 2) : nome) << endl;
    
    return 0;
}
