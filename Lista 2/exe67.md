    #include <iostream>
    #include <cmath>
    using namespace std;


    bool ehTriangulo(double a, double b, double c) {
    return (a + b > c && a + c > b && b + c > a);
    }
  

    void classificarTriangulo(double a, double b, double c) {
    
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);

    double a2 = a * a;
    double b2 = b * b;
    double c2 = c * c;

    if (fabs(c2 - (a2 + b2)) < 1e-6) {
        cout << "Triângulo retângulo" << endl;
    } else if (c2 > a2 + b2) {
        cout << "Triângulo obtusângulo" << endl;
    } else {
        cout << "Triângulo acutângulo" << endl;
    }
    }

    int main() {
    double a, b, c;
    cout << "Digite os três lados do triângulo: ";
    cin >> a >> b >> c;

    if (!ehTriangulo(a, b, c)) {
        cout << "Os valores não formam um triângulo válido." << endl;
    } else {
        classificarTriangulo(a, b, c);
    }

    return 0;
    }
