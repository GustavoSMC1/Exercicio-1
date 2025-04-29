    #include <iostream>
    #include <cctype>  

    using namespace std;

    int main() {
    int idade;
    char sexo;
    int totalHomens = 0;
    int homensMais21 = 0;

    cout << "Digite a idade e o sexo de 20 pessoas (M/F):" << endl;

    for (int i = 1; i <= 20; ++i) {
        cout << "\nPessoa " << i << ":" << endl;

        cout << "Idade: ";
        cin >> idade;

        cout << "Sexo (M/F): ";
        cin >> sexo;
        sexo = toupper(sexo);  

        if (sexo == 'M') {
            totalHomens++;
            if (idade > 21) {
                homensMais21++;
            }
        }
    }

    double percentual = 0.0;

    if (totalHomens > 0) {
        percentual = (static_cast<double>(homensMais21) / totalHomens) * 100;
    }

    cout << "\nPercentual de homens com mais de 21 anos: " << percentual << "%" << endl;

    return 0;
}
