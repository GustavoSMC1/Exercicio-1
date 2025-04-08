#include <iostream>

using namespace std;

 int main()
 {
 
    int numero;
   
    cout <<" Digite um numero ";
    cin >> numero;
   
    if ( numero % 10 == 0 && numero % 5 == 0 && numero % 2 == 0 ) {
       cout << " numero " << numero << " e divisivel por 10 , 5 , 2 ." << endl;
    } else {
        cout << " numero " << numero << " nao e divisivel por por 10 , 5 , 2 " << endl;
    }
   
   
    return 0;
}
