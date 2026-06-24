#include <iostream>
using namespace std;

int main() {
    int n, c;
    cin >> n >> c;
    
    int cups[1000001] = {0};
    
    for (int i = 0; i < c; i++) {
        int v;
        cin >> v;
        cups[v]++;
    }
    
    for (int i = 1; i <= n; i++) {
        cout << cups[i] << "\n";
    }
    
    return 0;
}
