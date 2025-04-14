    #include <iostream>
    using namespace std;

    int main() {
    float salario, desconto = 0;

    cout << "Digite o salário: R$ ";
    cin >> salario;

    if (salario <= 600.00) {
        cout << "Isento de INSS." << endl;
    } else if (salario <= 1200.00) {
        desconto = salario * 0.20;
        cout << "Desconto do INSS: R$ " << desconto << endl;
    } else if (salario <= 2000.00) {
        desconto = salario * 0.25;
        cout << "Desconto do INSS: R$ " << desconto << endl;
    } else {
        desconto = salario * 0.30;
        cout << "Desconto do INSS: R$ " << desconto << endl;
    }

    return 0;
    }
