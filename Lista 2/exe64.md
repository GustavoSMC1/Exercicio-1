#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int maior, intermediario, menor;

    
    cout << "Digite três números diferentes: ";
    cin >> a >> b >> c;

    
    if (a > b && a > c) {
        maior = a;
        if (b > c) {
            intermediario = b;
            menor = c;
        } else {
            intermediario = c;
            menor = b;
        }
    } else if (b > a && b > c) {
        maior = b;
        if (a > c) {
            intermediario = a;
            menor = c;
        } else {
            intermediario = c;
            menor = a;
        }
    } else { // c é o maior
        maior = c;
        if (a > b) {
            intermediario = a;
            menor = b;
        } else {
            intermediario = b;
            menor = a;
        }
    }

  
    cout << "Maior: " << maior << endl;
    cout << "Intermediário: " << intermediario << endl;
    cout << "Menor: " << menor << endl;

    return 0;
}
