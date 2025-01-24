#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "russian");
    int rows, cols;

   cout << "Введите количество строк матрицы: ";
   cin >> rows;
   cout << "Введите количество столбцов матрицы: ";
   cin >> cols;

    int originalMatrix[rows][cols];

   cout << "Введите элементы матрицы: " <<endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
           cin >> originalMatrix[i][j];
        }
    }

    int transposedMatrix[cols][rows];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposedMatrix[j][i] = originalMatrix[i][j];
        }
    }

   cout << "Транспонированная матрица: " <<endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
           cout << transposedMatrix[i][j] << " ";
        }
       cout <<endl;
    }

    return 0;
}
