// Size of a string.
#include <iostream>
#include <string.h>
using namespace std;

void sizeOfString(string word)
{
    int total = 0;
    for (int i = 0; word[i] != '\0'; i++)
        total++;
    cout << "Size of word for "
         << "'" << word << "'"
         << " is => " << total << endl;
}

void sizeOfPointer(char word[10], char *pointer)
{
    int total = 0;
    for (; *pointer != '\0'; pointer++)
        total++;
    cout << "Size of word for "
         << "'" << word << "'"
         << " is => " << total << endl;
}

int main()
{
    string wordOne = "holacommo";
    char wordTwo[10] = "hola";
    char *pointer = wordTwo;

    sizeOfString(wordOne);
    sizeOfPointer(wordTwo, pointer);
    return 0;
}
