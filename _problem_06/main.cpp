// Concatenate a string to another string.
#include <iostream>
using namespace std;

int sizeOf(char textString[50])
{
    int size = 0;
    for (int i = 0; textString[i] != '\0'; i++)
        size++;
    return size;
}

char *endOf(char *textString)
{
    char *pointer;
    for (; *textString != '\0'; textString++)
        pointer = textString;
    pointer++;
    return pointer;
}

void concatToA(char textStringA[50], char textStringB[50])
{
    int size = sizeOf(textStringA);
    for (int i = 0; textStringB[i] != '\0'; i++)
    {
        textStringA[size] = textStringB[i];
        size++;
    }
}

void concatToB(char *textStringA, char *textStringB)
{
    textStringA = endOf(textStringA);
    for (; *textStringB != '\0'; textStringB++)
    {
        *textStringA = *textStringB;
        textStringA++;
    }
}

int main()
{
    char textStringA[50] = "-";
    char textStringB[50] = "*";
    char textStringC[50] = "holacomoestas";

    concatToA(textStringA, textStringC);
    concatToB(textStringB, textStringC);
    cout << textStringA << endl;
    cout << textStringB << endl;
    return 0;
}