#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int nums[1001];
    
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    for (int i = n - 1; i >= 0; i--) {
        if (i == n - 1) {
            cout << nums[i];
        } else {
            cout << " " << nums[i];
        }
    }
    
    cout << "\n";
    
    return 0;
}
