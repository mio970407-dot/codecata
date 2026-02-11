#include <iostream>

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    for (int m = 0; m < b; m++) {
        for (int n = 0; n < a; n++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}