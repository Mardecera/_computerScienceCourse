// Product of matrices.
#include <iostream>
using namespace std;

void showMatrix(int matrix[][3])
{
    for (int i = 0; i < 2; i++)
    {
        cout << "[ ";
        for (int j = 0; j < 3; j++)
            cout << matrix[i][j] << ' ';
        cout << "]" << endl;
    }
}

void productOfMatrix(int matrixA[][2], int rowSizeA, int columSizeA, int matrixB[][3], int rowSizeB, int columSizeB, int matrixResult[][3])
{
    if (columSizeA == rowSizeB)
        for (int i = 0; i < rowSizeA; i++)
            for (int j = 0; j < columSizeB; j++)
                for (int k = 0; k < rowSizeB; k++)
                    matrixResult[i][j] += matrixA[i][k] * matrixB[k][j];

    showMatrix(matrixResult);
}

int main()
{
    int matrixA[2][2] = {{1, 2}, {3, 4}};
    int matrixB[2][3] = {{1, 2, 4}, {3, 4, 7}};
    int matrixResult[2][3] = {{0, 0, 0}, {0, 0, 0}};
    productOfMatrix(matrixA, 2, 2, matrixB, 2, 3, matrixResult);
    return 0;
}