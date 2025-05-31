    #include <iostream>
    #include <string>
    using namespace std;
    
    const int MAX_MERCADORIAS = 40;
    
    struct Mercadoria {
        string nome;
        int quantidade;
        float precoUnitario;
    };
    
    int main() {
        Mercadoria estoque[MAX_MERCADORIAS];
        int totalCadastradas = 0;
        int opcao;

    do {
        // Menu
        cout << "\n==== MENU ====\n";
        cout << "1 - Cadastrar mercadorias\n";
        cout << "2 - Exibir valor total em mercadorias\n";
        cout << "3 - Sair\n";
        cout << "Opção: ";
        cin >> opcao;
        cin.ignore(); 

        switch (opcao) {
            case 1:
                if (totalCadastradas >= MAX_MERCADORIAS) {
                    cout << "Limite de mercadorias atingido!\n";
                    break;
                }

                cout << "\nCadastro da mercadoria #" << totalCadastradas + 1 << endl;
                cout << "Nome: ";
                getline(cin, estoque[totalCadastradas].nome);

                cout << "Quantidade em estoque: ";
                cin >> estoque[totalCadastradas].quantidade;

                cout << "Preço unitário: ";
                cin >> estoque[totalCadastradas].precoUnitario;

                totalCadastradas++;
                break;

            case 2: {
                float valorTotal = 0;
                for (int i = 0; i < totalCadastradas; i++) {
                    valorTotal += estoque[i].quantidade * estoque[i].precoUnitario;
                }

                cout << "\nValor total em mercadorias: R$ " << valorTotal << endl;
                break;
            }

            case 3:
                cout << "Encerrando o programa...\n";
                break;

            default:
                cout << "Opção inválida! Tente novamente.\n";
        }

    } while (opcao != 3);

    return 0;
    }
