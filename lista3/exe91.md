    #include <iostream>
    using namespace std;

    int main() {
        int multiplicando, multiplicador, produto = 0;

    cout << "Digite dois números inteiros positivos:" << endl;
    cin >> multiplicando >> multiplicador;

    if (multiplicando > multiplicador) {
        
        int temp = multiplicando;
        multiplicando = multiplicador;
        multiplicador = temp;
    }

   
    for (int i = 0; i < multiplicador; ++i) {
        produto += multiplicando;
    }

    cout << "Produto (por somas sucessivas): " << produto << endl;

    return 0;
    }
