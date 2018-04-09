#include <iostream>

using namespace std;

bool palindrome(char A[])
{
    int cont = 0;
    for(int i = 0; A[i] != '\0'; i++)
        cont++;
    char C[cont], D[cont];

    for(int i = 0; A[i] != '\0'; i++)
    {
        if(A[i] != ' ')
        {
            C[i] = A[i];
        }
        cout << A[i] << endl;
    }
    //C[cont - 1] = '\0';

    cout << cont << endl;
    cout << C << endl;
    return true;

}

int main()
{
    char palin[] = "yo soy";
    bool k;
    k = palindrome(palin);
    cout << k << endl;
    return 0;
}
