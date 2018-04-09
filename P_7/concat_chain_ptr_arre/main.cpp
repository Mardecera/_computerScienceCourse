#include <iostream>

using namespace std;

int lon(char A[50])
{
    int tam = 0;
    for(int i = 0; A[i] != '\0'; i++)
        tam = i;
    return tam + 1;
}

char *fin(char *A)
{
    char *ptr;
    for(; *A != '\0'; A++)
        ptr = A;
    ptr++;
    return ptr;
}

int concat_a(char A[50], char B[50])
{
    int fin = lon(A);
    for(int i = 0; B[i] != '\0'; i++)
    {
        A[fin] = B[i];
        fin++;
    }
    return 0;
}

int concat_p(char *A, char *B)
{
    A = fin(A);
    for(; *B != '\0'; B++)
    {
        *A = *B;
        A++;
    }
    return 0;
}

int main()
{
    char chain1[50] = "hola";
    char chain2[50] = "holacomoestas";
    //concat_a(chain1, chain2);
    concat_p(chain1, chain2);
    //chain1 = chain2;
    cout << chain1 << endl;
    return 0;
}
