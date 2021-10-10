// Swap characters from a string.
#include <iostream>
#include <stdlib.h>
using namespace std;

char *getPointerOfChar(char *textString, int pos)
{
    for (int i = 0; i < pos; i++)
        textString++;
    return textString;
}

void swapChars(char textString[10], int swapPosA, int swapPosB)
{
    char aux = textString[swapPosA];
    textString[swapPosA] = textString[swapPosB];
    textString[swapPosB] = aux;
}

void swapCharsPointers(char *textString, int swapPosA, int swapPosB)
{
    char aux;
    aux = *(getPointerOfChar(textString, swapPosA));
    textString = getPointerOfChar(textString, swapPosA);
    *textString = *(getPointerOfChar(textString, swapPosB));
    textString = getPointerOfChar(textString, swapPosB);
    *textString = aux;
}

int main()
{
    char textStringA[10] = "hola";
    char textStringB[10] = "texy";

    swapChars(textStringA, 0, 3);
    swapCharsPointers(textStringB, 0, 3);
    cout << textStringA << endl;
    cout << textStringB << endl;
    return 0;
}
