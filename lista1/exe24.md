#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double nota1, nota2;
    
    cout << "Digite a primeira nota: ";
    cin >> nota1;
    
    cout << "Digite a segunda nota: ";
    cin >> nota2;
    
    double media = (nota1 + nota2) / 2;
    int media_truncada = static_cast<int>(media);
    int media_arredondada = round(media);
    
    cout << "Média final (aritmética): " << media << endl;
    cout << "Média truncada: " << media_truncada << endl;
    cout << "Média arredondada: " << media_arredondada << endl;
    
    return 0;
}
