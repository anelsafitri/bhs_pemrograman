#include <iostream>
using namespace std;

int main() {
    int n, j, i, k;
    cout << "masukkan jumlah baris: ";
    cin >> n;
    
    for (j = 1; j <= n; j++) {
       
        for (i = j; i < n; i++) {
            cout << " ";
        }
       
        for (k = 1; k <= j; k++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}

