#include <iostream>
using namespace std;

int main() {
    const int n = 4;
    int matrix[n][n];

    // Ввід матриці
    cout << "Введіть елементи матриці 4x4:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "matrix[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }

    // Вивід матриці
    cout << "\nМатриця:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    // Пошук мінімального елемента
    int minElement = matrix[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] < minElement) {
                minElement = matrix[i][j];
            }
        }
    }

    // Обчислення середнього арифметичного
    double sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sum += matrix[i][j];
        }
    }

    double average = sum / (n * n);

    // Результат
    double result = minElement * average;

    cout << "\nМінімальний елемент: " << minElement << endl;
    cout << "Середнє арифметичне: " << average << endl;
    cout << "Результат (добуток): " << result << endl;

    return 0;
}