#include <iostream>
using namespace std;

int main() {
    int hora, minutos;

    
    cout << "Digite a hora (0-23): ";
    cin >> hora;
    
    cout << "Digite os minutos (0-59): ";
    cin >> minutos;

  
    int minutosTotais = (hora * 60) + minutos;

    // Exibir o resultado
    cout << "Desde o início do dia, passaram-se " << minutosTotais << " minutos." << endl;

    return 0;
}
