#include <iostream>
using namespace std;

int main() {
    int a, b, c;

 
    cout << "Digite três números diferentes: ";
    cin >> a >> b >> c;

    
    if (a > b && a > c) {
        if (b > c)
            cout << a << " " << b << " " << c << endl;
        else
            cout << a << " " << c << " " << b << endl;
    } else if (b > a && b > c) {
        if (a > c)
            cout << b << " " << a << " " << c << endl;
        else
            cout << b << " " << c << " " << a << endl;
    } else { // c é o maior
        if (a > b)
            cout << c << " " << a << " " << b << endl;
        else
            cout << c << " " << b << " " << a << endl;
    }

    return 0;
}
