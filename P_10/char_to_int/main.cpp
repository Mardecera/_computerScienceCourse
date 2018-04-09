#include <iostream>

using namespace std;

float char_to_float(char A[])
{
    int n = 0, tam = 0;
    float x = 0.0;
    for(int i = 0; A[i] != '\0'; i++)
    {
        if(A[i] == '.')
        {
            for(int j = i + 1; A[j] != '\0'; j++)
                n++;
        }
        tam++;
    }
    int s = 1;

    for(int i = tam - 1; i >= 0; i--)
    {
        if(A[i] == '1')
            x += 1 * s;
        if(A[i] == '2')
            x += 2 * s;
        if(A[i] == '3')
            x += 3 * s;
        if(A[i] == '4')
            x += 4 * s;
        if(A[i] == '5')
            x += 5 * s;
        if(A[i] == '6')
            x += 6 * s;
        if(A[i] == '7')
            x += 7 * s;
        if(A[i] == '8')
            x += 8 * s;
        if(A[i] == '9')
            x += 9 * s;
        if(A[i] == '.')
            s /= 10;
        s *= 10;
    }
    float tt = 0.0;
    //float a = 10^n;
    tt = x / 100.0;
    return tt;
}

int main()
{
    char num[] = "13.23";
    float z;
    z = char_to_float(num);
    cout.precision(2);
    cout << "Precision: " << fixed << z << endl;
    return 0;
}
