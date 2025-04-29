    #include <iostream>

    using namespace std;

    int main() {
    int soma = 0;

    for (int i = 25; i <= 200; ++i) {
        if (i % 2 == 0) {
            soma += i;
        }
    }

    cout << "A soma dos números pares entre 25 e 200 é: " << soma << endl;

    return 0;
    }
