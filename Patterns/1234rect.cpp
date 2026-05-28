#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter no of lines: ";
    cin >> m;
    cout << "Enter last number in a line: ";
    cin >> n;

    for (int i = 1; i <= m; i++) {         // rows
        for (int j = 1; j <= n; j++) {     // columns
            cout << j;                     // print numbers 1 to n
        }
        cout << endl;                      // next line
    }

    return 0;
}