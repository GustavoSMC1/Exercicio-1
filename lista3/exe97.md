    #include <iostream>
    #include <iomanip> 
    
    using namespace std;
    
    int main() {
        const int TIMES = 5;
        const int JOGADORES = 12;

    float idade, peso;
    float soma_idade_time, soma_peso_time;
    float soma_idade_total = 0, soma_peso_total = 0;

    for (int t = 1; t <= TIMES; t++) {
        soma_idade_time = 0;
        soma_peso_time = 0;

        cout << "---- Time " << t << " ----\n";

        for (int j = 1; j <= JOGADORES; j++) {
            cout << "Jogador " << j << " - Idade: ";
            cin >> idade;

            cout << "Jogador " << j << " - Peso: ";
            cin >> peso;

            soma_idade_time += idade;
            soma_peso_time += peso;
        }

        float media_idade_time = soma_idade_time / JOGADORES;
        float media_peso_time = soma_peso_time / JOGADORES;

        soma_idade_total += soma_idade_time;
        soma_peso_total += soma_peso_time;

        cout << fixed << setprecision(2); 
        cout << "\nMédia de idade do time " << t << ": " << media_idade_time << " anos\n";
        cout << "Média de peso do time " << t << ": " << media_peso_time << " kg\n\n";
    }

    float media_idade_geral = soma_idade_total / (TIMES * JOGADORES);
    float media_peso_geral = soma_peso_total / (TIMES * JOGADORES);

    cout << "==== Resultados Gerais ====\n";
    cout << "Idade média de todos os jogadores: " << media_idade_geral << " anos\n";
    cout << "Peso médio de todos os jogadores: " << media_peso_geral << " kg\n";

    return 0;
    }
