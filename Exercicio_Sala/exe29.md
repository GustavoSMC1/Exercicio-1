    #include <iostream>
    #include <string>
    using namespace std;
    
    int main() {
        const int tamanho = 10;
    
    
    int codigos[tamanho] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    string enderecos[tamanho] = {
        "Rua A", "Rua B", "Rua C", "Rua D", "Rua E",
        "Rua F", "Rua G", "Rua H", "Rua I", "Rua J"
    };
    string telefones[tamanho] = {
        "1111-1111", "2222-2222", "3333-3333", "4444-4444", "5555-5555",
        "6666-6666", "7777-7777", "8888-8888", "9999-9999", "0000-0000"
    };

    int codigoBusca;
    cout << "Digite o código do cliente que deseja buscar: ";
    cin >> codigoBusca;

    bool encontrado = false;

    for (int i = 0; i < tamanho; i++) {
        if (codigos[i] == codigoBusca) {
            cout << "Cliente encontrado!" << endl;
            cout << "Código: " << codigos[i] << endl;
            cout << "Endereço: " << enderecos[i] << endl;
            cout << "Telefone: " << telefones[i] << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "Cliente com código " << codigoBusca << " não encontrado." << endl;
    }

    return 0;
    }
