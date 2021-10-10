// Insert an element in an orderly way to an array.
#include <iostream>
using namespace std;

void insertionSort(int Array[])
{
    int key, j;
    for (int i = 1; Array[i] != '\0'; i++)
    {
        key = Array[i];
        j = i - 1;
        while (j >= 0 && Array[j] > key)
        {
            Array[j + 1] = Array[j];
            j--;
        }
        Array[j + 1] = key;
    }
}

void printArray(int *Array)
{
    for (; *Array != '\0'; Array++)
        cout << *Array << " ";
    cout << endl;
}

int main()
{
    int Array[6] = {12, 11, 13, 5, 6, 1};

    insertionSort(Array);
    printArray(Array);
    return 0;
}
