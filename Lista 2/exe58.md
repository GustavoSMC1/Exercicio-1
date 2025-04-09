#include <iostream>
using namespace std;

int main()
{

     int num1,num2;
          cout << " Digite o primeiro número: ";
            cin >> num1;
              cout << " Digite o segundo numero: ";
                cin >> num2;
                  if ( num1 < num2 ) {
                   cout << " Orden crescente: " << num1 << " " << num2 << endl;
                    } else {
                     cout << " Ordem Crescente: " << num2 << " " << num1 << endl;
                      }        
    
    return 0;
}
