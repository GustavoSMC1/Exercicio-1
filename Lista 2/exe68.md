     #include <iostream>
    using namespace std;

    int main()
    {
    int idade;
        cout << " Digite sua idade : ";
        cin >> idade;
        
    if ( idade < 18 ) {
            cout << " A pessoa e menor de idade" << endl;
    } else if (idade >= 18 && idade  <= 65 )  {
        cout << " A pessoa e maior de idade" << endl;
    } else { // idade > 65 
        cout << " A pessoa tem mais que 65 anos" << endl;
        }
    return 0;
    }
