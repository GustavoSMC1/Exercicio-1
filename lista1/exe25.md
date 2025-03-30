#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double xl, x2, x3;
    
    cout << "Digite o valor de xl: ";
    cin >> xl;
    
    cout << "Digite o valor de x2: ";
    cin >> x2;
    
    cout << "Digite o valor de x3: ";
    cin >> x3;
    
    double x = xl + 2 * (xl - x2) + log2(x3) + xl;
    
    cout << "O valor de x é: " << x << endl;
    
    return 0;
}
