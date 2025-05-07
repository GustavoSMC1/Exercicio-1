
    #include <iostream> 
    #include <string>
    using namespace std;
    
    int main()
        {
        string nomes [10];
        
            cout << "Digite 10 nomes:\n";
        for (int i = 0; i < 10; i++) {
            cout << "Nome " << i + 1 << ": ";
            getline(cin, nomes[i]);
        }
            cout << "\nListagem dos nomes digitados:\n";
        for (int i = 0; i < 10; i++) {
            cout << i + 1 << ". " << nomes[i] << endl;
        }
        return 0;
     }
