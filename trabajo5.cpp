#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    getline(cin, line);
    
    char letra[101];
    int total = 0;
    
    for (int i = 0; i < line.size(); i++) {
        if (line[i] >= 'a' && line[i] <= 'z') {
            letra[total] = line[i];
            total++;
        }
    }
    
    for (int i = 0; i < total; i++) {
        for (int j = 0; j < total - 1; j++) {
            if (letra[j] > letra[j + 1]) {
                char temp = letra[j];
                letra[j] = letra[j + 1];
                letra[j + 1] = temp;
            }
        }
    }
    
    int k = 0;
    for (int i = 0; i < line.size(); i++) {
        if (line[i] >= 'a' && line[i] <= 'z') {
            line[i] = letra[k];
            k++;
        }
    }
    
    cout << line << "\n";
    
    return 0;
}
