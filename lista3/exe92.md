    #include <iostream>
    using namespace std;

    int main() {
    int termo1 = 1, termo2 = 1, proximo;

    cout << "10 primeiros termos da série de Fibonacci:" << endl;
    cout << termo1 << " " << termo2 << " ";

    for (int i = 3; i <= 10; ++i) {
        proximo = termo1 + termo2;
        cout << proximo << " ";
        termo1 = termo2;
        termo2 = proximo;
    }

    cout << endl;
    return 0;
    }
