#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the length of the side: ";
    cin >> n;

    int a = n; // extra variable to control number of stars

    for (int i = 1; i <= n; i++) {          // row loop
        for (int j = 1; j <= a; j++) {      // print 'a' stars
            cout << "*";
        }
       a--; 
        cout << endl;
                                
    }

    return 0;
}
