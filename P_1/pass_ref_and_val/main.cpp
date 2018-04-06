#include <iostream>

using namespace std;

void paso(int &a, int b)
{
    a++;
    b++;
}

int main()
{
    int r = 11, v = 3;
    paso(r, v);

    cout << "Paso por referencia: "<< r << endl;
    cout << "Paso por valor: " << v << endl;

    return 0;
}
