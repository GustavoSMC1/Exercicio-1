    #include <iostream>
    using namespace std;
    
    int main() {
        int n, a1, a2;

    cout << "Quantos termos deseja gerar da série de Fetuccine (mínimo 2)? ";
    cin >> n;

    if (n < 2) {
        cout << "A série precisa de pelo menos 2 termos." << endl;
        return 1;
    }

    cout << "Digite o primeiro termo: ";
    cin >> a1;
    cout << "Digite o segundo termo: ";
    cin >> a2;

    cout << "\nSérie de Fetuccine:" << endl;
    cout << a1 << " " << a2 << " ";

    int termoAnterior2 = a1;
    int termoAnterior1 = a2;
    int termoAtual;

    for (int i = 3; i <= n; ++i) {
        if (i % 2 == 1) {
            // Índice ímpar: soma
            termoAtual = termoAnterior1 + termoAnterior2;
        } else {
            
            termoAtual = termoAnterior1 - termoAnterior2;
        }

        cout << termoAtual << " ";

        
        termoAnterior2 = termoAnterior1;
        termoAnterior1 = termoAtual;
    }

    cout << endl;
    return 0;
    }
