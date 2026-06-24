#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    getline(cin, line);
    
    // Extraer las letras
    char letras[101];
    int total = 0;
    
    for (int i = 0; i < line.size(); i++) {
        if (line[i] >= 'a' && line[i] <= 'z') {
            letras[total] = line[i];
            total++;
        }
    }
    
    // Ordenar las letras con burbuja
    for (int i = 0; i < total; i++) {
        for (int j = 0; j < total - 1; j++) {
            if (letras[j] > letras[j + 1]) {
                char temp = letras[j];
                letras[j] = letras[j + 1];
                letras[j + 1] = temp;
            }
        }
    }
    
    // Poner las letras ordenadas de vuelta
    int k = 0;
    for (int i = 0; i < line.size(); i++) {
        if (line[i] >= 'a' && line[i] <= 'z') {
            line[i] = letras[k];
            k++;
        }
    }
    
    cout << line << "\n";
    
    return 0;
}
