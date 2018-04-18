#include <iostream>

using namespace std;

void insertionSort(int A[])
{
   int i, key, j;
   for (i = 1; A[i] != '\0'; i++)
   {
       key = A[i];
       j = i-1;
       while (j >= 0 && A[j] > key)
       {
           A[j+1] = A[j];
           j = j-1;
       }
       A[j+1] = key;
   }
}

void printi(int *A)
{
   for(; *A != '\0'; A++)
   {
       cout << *A << " , " ;
   }
   cout << endl;
}

int main()
{
    int arreglo[6] = {12, 11, 13, 5, 6};

    insertionSort(arreglo);
    printi(arreglo);

    return 0;
}
