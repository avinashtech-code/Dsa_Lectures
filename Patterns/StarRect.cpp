#include <iostream>
using namespace std;

int main() {
    int m ,n ;
    cout << "Enter no of lines: ";
    cin >> m;
    cout << "Enter no of star in a line: ";
    cin >> n;

    for (int i = 1; i <= m; i++) {     
        for (int j = 1; j <= n; j++) {   
            cout << "*";
        }
        cout << endl;                       
    }

    return 0;
}