#include <iostream>
#include <string>

using namespace std;

int strcopy_a(char A[50], char B[50])
{
    for(int i = 0; B[i] != '\0'; i++)
    {
        A[i] = B[i];
    }
    return 0;
}

int strcopy_p(char *A, char *B)
{
    for(; *B != '\0'; A++)
    {
        *A = *B;
        B++;
    }
    return 0;
}

int main()
{
    char chain1[50] = "hola";
    char chain2[50] = "holacomoestas";
    //strcopy_a(chain1, chain2);
    strcopy_p(chain1, chain2);
    //chain1 = chain2;
    cout << chain1 << endl;
    return 0;
}
