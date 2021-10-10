// Paso por valor y referencia.
#include <iostream>
using namespace std;

void passByReference(int &reference) { reference++; }
void passByValue(int value) { value++; }

int main()
{
    int reference = 11, value = 3;
    passByReference(reference);
    passByValue(value);

    cout << "Pass by reference => " << reference << endl;
    cout << "Pass by value => " << value << endl;

    return 0;
}