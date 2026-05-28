#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the length of the side: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {           // row loop
        for (int j = 1; j <= n + 1 - i; j++) { // number of stars decreases each line
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
