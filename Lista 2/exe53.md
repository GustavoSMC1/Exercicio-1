#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string nome;
    char sexo;
    int idade;
        cout << "Digite o nome: " << endl;
         cin >> nome;
            cout << " Digite o sexo (F para feminino, M para masculino " << endl;
            cin >> sexo;
            cout << " Digite a idade: " << endl;
            cin >> idade;
            
            if ((sexo == 'f' || sexo == 'F') && idade <25) {
                cout << nome << " ACEITA " << endl;
               } else {
                    cout << nome << " NAO ACEITA " << endl;
                }
            
            
    
    return 0;
}
