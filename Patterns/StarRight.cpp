#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number ";
    cin >> n;

    for (int i = 1; i <= n; i++) {          // rows
        for (int j = 1; j <= i; j++) {      // stars increase each row
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
