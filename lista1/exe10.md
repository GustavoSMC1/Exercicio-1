#include <iostream>
#include <string>
    using namespace std;
    
int main()
{

      string nome, endereco , telefone;
      std::cout << "Digite seu nome" << std::endl;
      getline (cin,nome);
    
    std::cout << "Digite seu endereco" << std::endl;
    getline (cin,endereco);
    
    std::cout << "Digite seu telefone" << std::endl;
    getline (cin,telefone);
    
     cout << "\nInformações fornecidas:" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Endereço: " << endereco << endl;
    cout << "Telefone: " << telefone << endl;
    
    
    return 0;
}
