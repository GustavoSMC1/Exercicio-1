    #include <iostream>
    #include <cmath> 

    using namespace std;

    int main() {
    double x, y;

    cout << "Digite o valor de x: ";
    cin >> x;

    if (x <= 1) {
        y = 1;
    } else if (x <= 2) {
        y = 2;
    } else if (x <= 3) {
        y = pow(x, 2); // x²
    } else {
        y = pow(x, 3); // x³
    }

    cout << "O valor de y é: " << y << endl;

    return 0;
    }
