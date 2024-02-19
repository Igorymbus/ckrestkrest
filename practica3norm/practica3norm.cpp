#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    const int str = 3;
    const int stolb = 5;
    double array[str][stolb];

    cout << "Введите элементы двумерного массива (3x5):\n";
    for (int i = 0; i < str; ++i) {
        for (int j = 0; j < stolb; ++j) {
            cout << "Введите элемент [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < str; ++i) {
        double sum = 0;
        for (int j = 0; j < stolb; ++j) {
            sum += array[i][j];
        }
        double average = sum / stolb;
        cout << "Среднее арифметическое элементов строки " << i << ": " << average << endl;
    }
    return 0;
}

