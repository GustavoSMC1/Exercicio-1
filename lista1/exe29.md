#include <iostream>

using namespace std;

int main() {
    double celsius;
    
    cout << "Digite a temperatura em graus Celsius: ";
    cin >> celsius;
    
    double fahrenheit = (9.0 / 5.0) * celsius + 32;
    
    cout << "A temperatura em Fahrenheit é: " << fahrenheit << endl;
    
    return 0;
}
