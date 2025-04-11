#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    
     double num1,num2;
     cout<<" Digite um numero";
         cin >> num1;
     cout << " Digite outro numero " ;
         cin >> num2;
    double menor,maior;
        if (num1<num2){
            menor = num1;
            maior = num2;
        } else {
            menor = num2;
            maior = num1;
            }
        double quadradomenor = pow (menor,2);
        double raizmaior = sqrt (maior);
        cout << " Quadrado do menor numero (" << menor << "): " << quadradomenor << endl;
        cout << " Raiz quadrada do maior número (" << maior << "): " << raizmaior << endl;

    return 0;
}
