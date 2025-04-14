    #include <iostream>
    using namespace std;

    int main() {
    int a, b, c;

    cout << "Digite três números: ";
    cin >> a >> b >> c;

    
    if (a + b > c && a + c > b && b + c > a) {
        cout << "Os números podem formar um triangulo." << endl;
    } else {
        cout << "Os números NÃO podem formar um triangulo." << endl;
    }

    return 0;
}
