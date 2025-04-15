     #include <iostream>
    using namespace std;

    int main() {
        
     float altura,pesoideal;
     char sexo;
    cout << " Digite a altura (em metros) ";
    cin >> altura;
    cout << " Digite o sexo ( M para masculino,F para feminino ) ";
    cin >> sexo;
    sexo = toupper (sexo);
    
    if (sexo == 'M') {
        pesoideal = (72.7 * altura) - 58;
        cout << "Peso ideal (homem): " << pesoideal << " kg" << endl;
    } else if (sexo == 'F') {
        pesoideal = (62.1 * altura) - 44.7;
        cout << "Peso ideal (mulher): " << pesoideal << " kg" << endl;
    } else {
        cout << "Sexo inválido! Use 'M' para masculino ou 'F' para feminino." << endl;
    }

    return 0;
    }
