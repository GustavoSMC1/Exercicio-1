
      #include <iostream>
    using namespace std;
    
    int main()
    {
        int a, b;
        float y[4][4]; 

    for (a = 0; a < 4; a++) 
    {
        for (b = 0; b < 4; b++) 
        {
            cout << "Digite um numero: ";
            cin >> y[a][b]; 
        }
    }
     cout << "\nMatriz digitada:\n";
        for (a = 0; a < 4; a++)
        {
            for (b = 0; b < 4; b++)
            {
                cout << y[a][b] << "\t"; 
            }
            cout << endl;
        }
        return 0;
    }

