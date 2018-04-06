#include <iostream>

using namespace std;

void mostrar(int m[][3])
{
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout<< m[i][j] << ", ";
        }
        cout << endl;
    }
}

void multi(int A[][2], int a_f, int a_c, int B[][3], int b_f, int b_c, int C[][3])
{
    if(a_c == b_f)
    {
        for(int i = 0; i < a_f; i++)
        {
            for(int j = 0; j < b_c; j++)
            {
                for(int k = 0; k < b_f; k++)
                {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }
    }
    mostrar(C);
}

int main()
{
    int M1[2][2] = {{1, 2}, {3, 4}};
    int M2[2][3] = {{1, 2, 4}, {3, 4, 7}};
    int M3[2][3] = {{0, 0, 0}, {0, 0, 0}};
    multi(M1, 2, 2, M2, 2, 3, M3);
    return 0;
}
