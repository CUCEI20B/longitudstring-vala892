#include <iostream>

using namespace std;

int main() {
   string cadena;

    //cin >> cadena; // lee hasta un espacio o salto de linea
    getline(cin, cadena); //lee hasta \n
    cout << cadena.size() << endl;

    return 0;
}