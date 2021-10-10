// Add elements of an array.
#include <iostream>
using namespace std;

int addRecursion(int *Array, int size)
{
    if (size == 0)
        return 0;
    size--;
    return Array[size] + addRecursion(Array, size);
}

int addIteration(int *Array, int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
        total += Array[i];
    return total;
}

int main()
{
    int size = 6;
    int Array[size] = {6, 2, 3, 4, 5, 6};
    cout << "Add of Array with recursion => " << addRecursion(Array, size) << endl;
    cout << "Add of Array with iteration => " << addIteration(Array, size) << endl;
    return 0;
}
