#include <iostream>

using namespace std;

int main() {
    double tempo, velocidade_media;
    
  
    cout << "Digite o tempo gasto na viagem (em horas): ";
    cin >> tempo;
    
    cout << "Digite a velocidade média (em km/h): ";
    cin >> velocidade_media;
    

    double distancia = tempo * velocidade_media;
    

    double litros_utilizados = distancia / 12;
    
    // Exibir os resultados
    cout << "Velocidade média: " << velocidade_media << " km/h" << endl;
    cout << "Tempo gasto na viagem: " << tempo << " horas" << endl;
    cout << "Distância percorrida: " << distancia << " km" << endl;
    cout << "Quantidade de litros utilizados: " << litros_utilizados << " litros" << endl;
    
    return 0;
}
