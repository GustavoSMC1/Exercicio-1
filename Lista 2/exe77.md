     #include <iostream>
      using namespace std;

    int main() {
    float valorcompra, valorvendas; 

    cout << "Digite o valor da compra: $";
        cin >> valorcompra;
    if ( valorcompra < 20.00){
        valorvendas =  valorcompra * 1.45;
    }
    else {
        valorvendas = valorcompra * 1.30;
    }
    cout << "O valor de venda do produto sera: R$ " << valorvendas << endl;
    return 0;
    }
