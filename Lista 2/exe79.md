    #include <iostream>
    using namespace std;

    int main() {
       int idade;
       
       cout << " Digite a idade do nadador " << endl;
       cin >> idade;
       
       if ( idade >= 5 && idade <= 7) {
           cout << " Categoria: Infantil A" << endl; 
            }
            else if ( idade >= 8 && idade <= 10){
                cout << " Categoria: Infantil B" << endl;
            }
            else if ( idade >= 11 && idade <= 13 ){
                cout << " Categoria: Juvenil A" << endl;
            }
            else if ( idade >= 14 && idade <= 17) {
                cout << " Categoria: Juvenil B" << endl;
            }
            else if ( idade >= 18) {
                cout << " Categoria Sênior" << endl;
            }
            else {
        cout << "Idade inválida para competição (menor que 5 anos)." << endl;
    }
  

    return 0;
    }
