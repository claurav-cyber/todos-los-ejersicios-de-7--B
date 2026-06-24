#include <iostream>
#include <string>
using namespace std;

int main() {

    int N;
    cin >> N;


    for (int i = 0; i < N; i++) {
        string palabra;
        cin >> palabra;

      
        bool esPalindromo = true;

        int izq = 0;
        int der = palabra.length() - 1;

        while (izq < der) {
            
            if (palabra[izq] != palabra[der]) {
                esPalindromo = false;  // Ya no es palindromo
                break;                  // Nos salimos, no hay que seguir
            }

            izq++;
            der--;
        }


        if (esPalindromo) {
            cout << "Palindromo" << endl;
        } else {
            cout << "NoPalindromo" << endl;
        }
    }

    return 0;
    
}
