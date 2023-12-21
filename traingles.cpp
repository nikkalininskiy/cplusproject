#include <iostream>
using namespace std;
int main() {
    cout << "Введите количество треугольников, которое хотите увидеть: ";
    int n;
    cin >> n;
    int spaces = n;
    for (int i = 1; i <= n; ++i) {
        for (int t = 1; t <= n; ++t) {
            for (int s = 0; s < spaces - 1; ++s) {
                cout << " ";
            }
            for (int j = 1; j <= 2 * i - 1; ++j) {
                cout << "*";
            }

            for (int s = 0; s < spaces; ++s) {
                cout << " ";
            }
        }
        cout << endl;
        spaces--;
    }
    return 0;
}