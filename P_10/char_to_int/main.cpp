#include <iostream>

using namespace std;

template <class T>
T pow(T base, int exp)
{
    T result = 1.0;
    for(int i = 0; i < exp; ++i)
    {
        result *= base;
    }
    return result;
}

int decim(char A[])
{
    int n_deci = 0;
    for(int i = 0; A[i] != '\0'; i++)
    {
        if(A[i] == '.')
        {
            for(int j = i + 1; A[j] != '\0'; j++)
                n_deci++;
        }
    }

    return n_deci;
}

int char_to_int(char A[])
{
    int s = 1, n_entero = 0, tam_A = 0;

    for(int i = 0; A[i] != '\0'; i++)
        tam_A++;

    for(int i = tam_A - 1; i >= 0; i--)
    {
        if(A[i] == '1')
            n_entero += 1 * s;
        if(A[i] == '2')
            n_entero += 2 * s;
        if(A[i] == '3')
            n_entero += 3 * s;
        if(A[i] == '4')
            n_entero += 4 * s;
        if(A[i] == '5')
            n_entero += 5 * s;
        if(A[i] == '6')
            n_entero += 6 * s;
        if(A[i] == '7')
            n_entero += 7 * s;
        if(A[i] == '8')
            n_entero += 8 * s;
        if(A[i] == '9')
            n_entero += 9 * s;
        s *= 10;
    }
    return n_entero;
}

float char_to_float(char A[], int n_deci)
{
    int tam_A = 0;
    float n_entero = 0.0, s = 1;

    for(int i = 0; A[i] != '\0'; i++)
        tam_A++;

    for(int i = tam_A - 1; i >= 0; i--)
    {
        if(A[i] == '1')
            n_entero += 1 * s;
        if(A[i] == '2')
            n_entero += 2 * s;
        if(A[i] == '3')
            n_entero += 3 * s;
        if(A[i] == '4')
            n_entero += 4 * s;
        if(A[i] == '5')
            n_entero += 5 * s;
        if(A[i] == '6')
            n_entero += 6 * s;
        if(A[i] == '7')
            n_entero += 7 * s;
        if(A[i] == '8')
            n_entero += 8 * s;
        if(A[i] == '9')
            n_entero += 9 * s;
        if(A[i] == '.')
            s /= 10;
        s *= 10;
    }

    float tt = 0.0;
    float ten = 10.0;
    float denom = pow(ten, n_deci);
    tt = n_entero / denom;
    return tt;
}

int main()
{
    char num[] = "44.521";
    int decimal = decim(num);
    int y; float z;

    if(decimal == 0)
    {
        y = char_to_int(num);
        cout << y << endl;
    }
    else
    {
        z = char_to_float(num, decimal);
        cout.precision(decimal);
        cout << fixed << z << endl;
    }
    return 0;
}
