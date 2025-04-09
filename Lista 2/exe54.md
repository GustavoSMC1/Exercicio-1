#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
   string estado;
    cout << " Digite seu estado  " << endl;
    cin >> estado;  
    transform(estado.begin(), estado.end(), estado.begin(), ::toupper);;
        if (estado == "RJ" ){
                cout << " Carioca "<< endl;
            } else if (estado == "SP"){
                cout << " Paulista"<< endl;  
            } else if ( estado == "MG" ){
                cout << " Mineiro"<< endl;
            } else  cout << " Outros Estados" << endl;
        

    return 0;
}
