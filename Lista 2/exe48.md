#include <iostream>

using namespace std;

int main()
{

    int numero;
   
    cout <<" Digite um numero ";
    cin >> numero;
   
    if ( numero % 3  == 0 && numero % 7 == 0 ) {
       cout << " numero " << numero << " e divisivel por 3 e por 7 ." << endl;
     } else {
        cout << " numero " << numero << " nao e divisivel por 3 e por 7" << endl;
     }
   
   
    return 0;
}
