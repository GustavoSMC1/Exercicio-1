    #include <iostream>
    #include <algorithm> 
    using namespace std;

    int main() {
    int pontos [3] ;
    
    cout << " Digite os pontos do jogador: " << endl;
    cin >> pontos [0];
    
    cout << " Digite os pontos do segundo jogador:" << endl;
    cin >> pontos [1] ;
    
    cout << " Digite os pontos do terceiro jogador:" << endl;
    cin >> pontos [2];
    
    if (pontos[0] == pontos[1] || pontos[0] == pontos[2] || pontos[1] == pontos[2]) {
        cout << "Os jogadores não podem ter pontuações iguais. Tente novamente." << endl;
        return 0;
    }
     sort(pontos, pontos + 3, greater<int>());

    cout << "\nPontos em ordem decrescente: ";
    for (int i = 0; i < 3; i++) {
        cout << pontos[i] << " ";
    }
    cout << endl;

    int soma = pontos[0] + pontos[1] + pontos[2];

    if (soma > 100) {
        float media = soma / 3.0;
        cout << "Média dos pontos: " << media << endl;
    } else {
        cout << "Equipe desclassificada" << endl;
    }

    return 0;
    }
    
