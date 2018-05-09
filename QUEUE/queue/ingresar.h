#ifndef INGRESAR_H_INCLUDED
#define INGRESAR_H_INCLUDED

#include <iostream>
#define type int
using namespace std;

template <typename T>

struct Nodo
{
    T data;
    Nodo *next;
};

int sizeCola(Nodo<int> *A)
{
    int tt = 0;
    while(true)
    {
        if(A->next == NULL)
            break;
        tt++;
        A = A->next;
    }
    tt++;
    return tt;
}

Nodo<type> *ingreso()
{
    type num;
    char rpt;
    cout << "Ingresa Elemento de la lista:";
    cin >> num;

    if(num == 0 || num == '0')
    {
        cout << "¿Terminar? Y/N: ";
        cin >> rpt;
        if(rpt == 'Y' || rpt == 'y')
            return NULL;
    }

    Nodo<type> *cola = new Nodo<type>;
    cola->data = num;
    cola->next = ingreso();
    return cola;
}

void print(Nodo<type> *C)
{
    while(true)
    {
        if(C->next == NULL)
            break;
        cout << C->data << ", ";
        C = C->next;
    }
    cout << C->data << endl;
}

void concatenar(Nodo<type> *A, Nodo<type> *B)
{
    while(true)
    {
        if(A->next == NULL)
            break;
        A = A->next;
    }
    A->next = B;
}

int Suma(Nodo<type> *A)
{
    int tt = 0;
    while(true)
    {
        tt += A->data;
        if(A->next == NULL)
            break;
        A = A->next;
    }
    return tt;
}

Nodo<type> *ColaSuma(Nodo<type> *A, Nodo<type> *B)
{
    if(A->next == NULL)
    {
        Nodo<type> *aux = new Nodo<type>;
        aux->data = (A->data) + (B->data);
        aux->next = NULL;
        return aux;
    }

    Nodo<type> *aux = new Nodo<type>;
    aux->data = (A->data) + (B->data);
    A = A->next;
    B = B->next;
    aux->next = ColaSuma(A, B);
    return aux;
}

Nodo<type> *ColaResta(Nodo<type> *A, Nodo<type> *B)
{
    if(A->next == NULL)
    {
        Nodo<type> *aux = new Nodo<type>;
        aux->data = (A->data) - (B->data);
        aux->next = NULL;
        return aux;
    }

    Nodo<type> *aux = new Nodo<type>;
    aux->data = (A->data) - (B->data);
    A = A->next;
    B = B->next;
    aux->next = ColaResta(A, B);
    return aux;
}

#endif // INGRESAR_H_INCLUDED
