#include <iostream>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Введите количество треугольников, которое хотите увидеть: ";
    int n;
    cin >> n;
    do {

        if (std::cin.fail() || n < 0) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Ошибка: Введите n повторно." << std::endl;
            std::cin >> n;
        }
    } while (std::cin.fail() || n < 0);
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