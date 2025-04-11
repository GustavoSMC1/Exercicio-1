#include <iostream>
using namespace std;

int main()
{

    int num1,num2,num3;
    
     cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o segundo número: ";
    cin >> num2;

    cout << "Digite o terceiro número: ";
    cin >> num3;
       
       int maior;
       
       if (num1 > num2 && num1 > num3) {
        maior = num1;
    } else if (num2 > num1 && num2 > num3) {
        maior = num2;
    } else {
        maior = num3;
    }

    cout << "O maior número é: " << maior << endl;

    
    return 0;
}
