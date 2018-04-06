#include <iostream>

using namespace std;

int sum_r(int *p, int tam)
{
    if(tam == 0)
        return 0;
    tam--;
    return p[tam] + sum_r(p, tam);
}

int sum_i(int *p, int tam)
{
    int tt = 0;
    for(int i = 0; i < tam; i++)
    {
        tt += p[i];
    }
    return tt;
}

int main()
{
    int tam = 6;
    int array1[tam] = {6, 2, 3, 4, 5, 6};
    cout << "Suma de un arreglo con recursividad: " << sum_r(array1, tam) << endl;
    cout << "Suma de un arreglo con iretacion: " << sum_i(array1, tam) << endl;
    return 0;
}
