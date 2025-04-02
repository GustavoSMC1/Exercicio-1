#include <iostream>
using namespace std;
#include <cmath>

int main()
{

    double numero;                                                                                                                                                                                                                                                                                                                                                                                                  
    cout <<"Digite um numero ";
    cin >> numero ;
   
    if (numero >=0) {
    cout << " A raiz quadrada e :" <<sqrt (numero) << endl;
    }else{
    cout << "o quadrado do numero e :" << pow (numero,2) << endl;
   
    }
    return 0;
}
