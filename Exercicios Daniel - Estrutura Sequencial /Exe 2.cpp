#include <iostream>
using namespace std;

int main()
{
    double salarioAntigo,aumento;
     cout << " Digite o salario atual" << endl;
        cin >> salarioAntigo;
    
         aumento = salarioAntigo + (salarioAntigo*0.10);
            cout << " O Novo salario é de :" << aumento << endl;
 
    return 0;
}
