#include <iostream>
#include <stdlib.h>

using namespace std;

int exchange_a(char A[10], int a, int b)
{
    char aux = A[a];
    A[a] = A[b];
    A[b] = aux;
    return 0;
}

char* puntual(char *A, int a)
{
    for(int i = 0; i < a; i++)
        A++;
    return A;
}

int exchange_p(char *A, int a, int b)
{
    char aux;
    aux = *(puntual(A, a));
    A = puntual(A, a);
    *A = *(puntual(A, b));
    A = puntual(A, b);
    *A = aux;

    return 0;
}

int main()
{
    char chain[10] = "hola";
    //int x = rand() %1;
    //exchange_a(chain, 0, 3);
    exchange_p(chain, 0, 3);
    cout << chain << endl;
    return 0;
}
