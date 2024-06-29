#include <iostream>
using namespace std;

void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int resultMatrix[][10], int rowFirst, int colFirst, int colSecond) {
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < colSecond; j++) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < colFirst; k++) {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int firstMatrix[10][10], secondMatrix[10][10], resultMatrix[10][10];
    int rowFirst, colFirst, rowSecond, colSecond;

    cout << "Enter rows and columns for first matrix: ";
    cin >> rowFirst >> colFirst;

    cout << "Enter rows and columns for second matrix: ";
    cin >> rowSecond >> colSecond;

    if (colFirst != rowSecond) {
        cout << "Error! Column of first matrix must be equal to row of second matrix." << endl;
        return -1;
    }

    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < colFirst; j++) {
            cin >> firstMatrix[i][j];
        }
    }

    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < rowSecond; i++) {
        for (int j = 0; j < colSecond; j++) {
            cin >> secondMatrix[i][j];
        }
    }

    multiplyMatrices(firstMatrix, secondMatrix, resultMatrix, rowFirst, colFirst, colSecond);

    cout << "Resultant matrix:" << endl;
    displayMatrix(resultMatrix, rowFirst, colSecond);

    return 0;
}
// A stream is abstraction;
