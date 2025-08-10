#include <iostream>
using namespace std;

int main() {
   const double pi = 3.14159;
   double raio,area;
    
    cout << " Digite o valor do raio da circunferencia :";
    cin >> raio;
        
        area = pi * raio * raio;
        
    cout << " A area da circunferencia é " << area << endl;
}
