    #include <iostream>
    #include <string>
    using namespace std;
    
    int main() {
        string nomes[5];        
        float notas1[5];         
        float notas2[5];         
        float medias[5];         
       
        for (int i = 0; i < 5; i++) {
            cout << "Aluno " << i + 1 << endl;

        cout << "Nome: ";
        getline(cin, nomes[i]);

        cout << "Nota 1: ";
        cin >> notas1[i];

        cout << "Nota 2: ";
        cin >> notas2[i];

        cin.ignore(); 
        medias[i] = (notas1[i] + notas2[i]) / 2;
        cout << endl;
    }

    cout << "\n=== Lista de Alunos com Notas e Média ===\n";
    for (int i = 0; i < 5; i++) {
        cout << "Aluno: " << nomes[i] << endl;
        cout << "Nota 1: " << notas1[i] << endl;
        cout << "Nota 2: " << notas2[i] << endl;
        cout << "Média: " << medias[i] << endl;
        cout << "--------------------------\n";
    }

    return 0;
    }
