#include <iostream>
#include <string.h>

using namespace std;

void tam_arre(string A)
{
    int tt = 0;
    for(int i = 0; A[i] != '\0'; i++)
        tt++;
    cout << "Tamanio de la cadena " << " '" << A << "' " << " es : " << tt << endl;
}

void tam_ptr(char* A, char*B)
{
    int tt = 0;
    for(; *A != '\0'; A++)
        tt++;
    cout << "Tamanio de la cadena " << " '" << B << "' " << " es : " << tt << endl;
}

int main()
{
    string word = "holacommo";
    char *ptr = "hola";
    tam_arre(word);
    tam_ptr(ptr, ptr);
    return 0;
}
