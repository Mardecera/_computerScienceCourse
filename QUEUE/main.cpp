#include <iostream>
#include "ingresar.h"
#define type int

using namespace std;

int main()
{
    int sumCola = 0;
    Nodo<type> *cola1 = ingreso();
    Nodo<type> *cola2 = ingreso();

    /******************* Mostrar *******************/
    cout << "Cola 1 : " << endl;
    print(cola1);
    cout << endl;
    cout << "Cola 2 : " << endl;
    print(cola2);
    cout << endl;

    /******************* Suma de una cola *******************/
    sumCola = Suma(cola1);
    cout << "Suma de la cola: " << sumCola << endl;

    /******************* Suma y Resta de dos cola *******************/
    Nodo<type> *colaSum = ColaSuma(cola1, cola2);
    Nodo<type> *colaRest = ColaResta(cola1, cola2);

    cout << "Suma : " << endl;
    print(colaSum);
    cout << endl;
    cout << "Resta : " << endl;
    print(colaRest);
    cout << endl;

    /******************* Concatenar dos colas *******************/
    concatenar(cola1, cola2);
    cout << "Cola 1 concatenada: " << endl;
    print(cola1);
    cout << endl;

    cout << sizeCola(cola1);

    delete[] cola1;
    delete[] cola2;
    delete[] colaSum;
    delete[] colaRest;
    return 0;
}
