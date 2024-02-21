#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RUS");
    const int stroki = 3;
    const int ll = 5;
    double array[stroki][ll];
    cout << "Элементы массива:\n";
    for (int i = 0; i < stroki; ++i) {
        cout << "Строка " << i + 1 << " ";
        for (int j = 0; j < ll; ++j) {
            cout << "Элемент " << j + 1 << ": ";
            cin >> array[i][j];
        }
    }
    cout << "Средние арифметические:\n";
    for (int i = 0; i < stroki; ++i) {
        double sum = 0.0;
        for (int j = 0; j < ll; ++j) {
            sum += array[i][j];
        }
        double average = sum / ll;
        cout << "Строка " << i + 1 << ": " << average << endl;
    }
    return 0;
}