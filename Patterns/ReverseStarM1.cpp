#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the length of the side: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {          // start from n and go down
        for (int j = 1; j <= i; j++) {      // print i stars
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
