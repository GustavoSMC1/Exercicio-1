#include <iostream>
using namespace std;

int main()
{

    int num1,num2,soma;
    cout << "Digite um numero ";
    cin >> num1 ;
    cout <<"digite outro numero ";
    cin >> num2;
    soma = num1 + num2 ;
    if (soma < 20) 
    soma += 8;
    else{
    soma -=5;
    }
    cout << "a soma e " << soma << endl;
    return 0;
}
