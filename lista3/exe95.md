    #include <iostream>
    
    using namespace std;
    
    int main() {
        const int TOTAL_PESSOAS = 20;
        int idade, opiniao;

    int soma_idade_excelente = 0;
    int count_excelente = 0;
    int count_regular = 0;
    int count_bom = 0;

    for (int i = 1; i <= TOTAL_PESSOAS; i++) {
        cout << "Pessoa " << i << ":\n";
        cout << "Digite a idade: ";
        cin >> idade;

        cout << "Opinião sobre o filme (3 - excelente, 2 - bom, 1 - regular): ";
        cin >> opiniao;

        switch (opiniao) {
            case 3:
                soma_idade_excelente += idade;
                count_excelente++;
                break;
            case 2:
                count_bom++;
                break;
            case 1:
                count_regular++;
                break;
            default:
                cout << "Opinião inválida. Resposta ignorada.\n";
                i--; // Repetir essa iteração
                break;
        }

        cout << endl;
    }

    float media_idade_excelente = (count_excelente > 0) ? 
                                  (float)soma_idade_excelente / count_excelente : 0.0;

    // Cálculo da porcentagem de respostas "bom"
    float percentual_bom = ((float)count_bom / TOTAL_PESSOAS) * 100.0;

    cout << "\n--- Resultados da Pesquisa ---\n";
    cout << "Média das idades das pessoas que responderam 'excelente': " 
         << media_idade_excelente << endl;

    cout << "Quantidade de pessoas que responderam 'regular': " 
         << count_regular << endl;

    cout << "Percentual de pessoas que responderam 'bom': " 
         << percentual_bom << "%" << endl;

    return 0;
    }
