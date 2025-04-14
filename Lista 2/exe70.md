    #include <iostream>
    #include <string>
    #include <iomanip> 

    using namespace std;

    int main() {
    string nome;
    float pr1, pr2, media;

   
    cout << "Digite o nome do aluno: ";
    getline(cin, nome); 

    cout << "Digite a nota da PR1: ";
    cin >> pr1;

    cout << "Digite a nota da PR2: ";
    cin >> pr2;

    
    media = (pr1 + pr2) / 2;

    
    cout << fixed << setprecision(2); 
    cout << "\n--- Resultado ---" << endl;
    cout << "Nome: " << nome << endl;
    cout << "PR1: " << pr1 << endl;
    cout << "PR2: " << pr2 << endl;
    cout << "Média: " << media << endl;

    
    if (media >= 7.0) {
        cout << "Situação: Aprovado" << endl;
    } else if (media < 3.0) {
        cout << "Situação: Reprovado" << endl;
    } else {
        cout << "Situação: Prova Final" << endl;
    }

    return 0;
    }
