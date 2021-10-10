// Check if a string is palindrome.
#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char *textString)
{
    reverse_iterator<const char *> first(textString + strlen(textString));
    reverse_iterator<const char *> last(textString);

    for (; first != last, *textString != '\0'; textString++, first++)
        if (*first != *textString)
            return false;
    return true;
}

int main()
{
    char textString[] = "anitalavalatina";

    cout << "'" << textString << "'";
    if (isPalindrome(textString))
        cout << " is palindrome." << endl;
    else
        cout << " isn't palindrome." << endl;
    return 0;
}
