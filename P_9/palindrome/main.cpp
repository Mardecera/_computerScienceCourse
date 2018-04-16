#include <iostream>

using namespace std;

bool palindrome(char *A)
{
    int cont = 0, tt = 0;
    char *B = A;
    for(; *A != '\0'; A++)
    {
        cont++;
    }
    char *C = A--;
    C--;

    for(; *B != '\0'; B++, C--)
    {
        if(*B == ' ')
        {
            B++;
            tt++;
        }
        if(*C == ' ')
        {
            C--;
        }
        if(*C != *B)
        {
            //cout << *C << " : " << *B << endl;
            break;
        }
        tt++;
    }
    //cout << tt << endl;
    if(tt != cont)
        return false;
    else
        return true;

}

int main()
{
    char palin[] = "ama";
    bool k;
    k = palindrome(palin);
    if(k)
        cout << "'" << palin << "'" << " es un palindromo."<< endl;
    else
        cout << "'" << palin << "'" << " no es un palindromo."<< endl;
    return 0;
}
