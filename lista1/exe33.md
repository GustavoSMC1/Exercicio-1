#include <iostream>
using namespace std;

int main() {
    int A, B;
    
 
    cout << "Digite o valor de A: ";
    cin >> A;
    
    cout << "Digite o valor de B: ";
    cin >> B;
    

    int temp = A;
    A = B;
    B = temp;
    
    // Mostrar os novos valores
    cout << "Novo valor de A: " << A << endl;
    cout << "Novo valor de B: " << B << endl;
    
    return 0;
}
