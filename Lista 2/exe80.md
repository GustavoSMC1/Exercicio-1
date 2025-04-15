    #include <iostream>
    #include <string>
    using namespace std;

    int main() {
    string municipio;
    int eleitores, votosMaisVotado;

    cout << "Digite o nome do município: ";
    getline(cin, municipio);  

    cout << "Digite a quantidade de eleitores aptos: ";
    cin >> eleitores;

    cout << "Digite o número de votos do candidato mais votado: ";
    cin >> votosMaisVotado;

   
    if (eleitores > 20000) {
        float percentual = (float)votosMaisVotado / eleitores * 100;

        if (percentual > 50) {
            cout << "Não haverá segundo turno em " << municipio << "." << endl;
        } else {
            cout << "Haverá segundo turno em " << municipio << "." << endl;
        }
    } else {
        cout << "Município com 20.000 ou menos eleitores: não há segundo turno." << endl;
    }

    return 0;
    }
