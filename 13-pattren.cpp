#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number : ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print increasing part
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        // Print decreasing part
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}
