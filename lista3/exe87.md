    #include <iostream>

    using namespace std;

    int main() {
    int limite;

    cout << "Digite o limite superior do intervalo: ";
    cin >> limite;

    cout << "\nNúmeros ímpares menores que " << limite << ":" << endl;

    for (int i = 1; i < limite; i += 2) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
    }
