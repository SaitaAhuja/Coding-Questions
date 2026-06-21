#include <iostream>
using namespace std;
int main() {
    int n;
    while (cin >> n && n != 0) {
        int a[60];
        int c = n;
        for (int i = 0; i < n; i++)
            a[i] = i + 1;
        cout << "Discarded cards:";
        int f = 1;
        while (c >= 2) {
            int x = a[0];
            if (f == 1) {
                cout << " " << x;
                f = 0;
            } else {
                cout << ", " << x;
            }
            int y = a[1];
            for (int i = 0; i < c - 2; i++) {
                a[i] = a[i + 2];
            }
            c = c - 2;
            a[c] = y;
            c = c + 1;
        }
        cout << endl;
        cout << "Remaining card: " << a[0] << endl;
    }
    return 0;
}
