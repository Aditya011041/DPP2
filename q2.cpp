#include <iostream>
#include <string>
using namespace std;

void isPalindrome(string str)
{
    int len = str.length();
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            cout << "The string is not a palindrome." << endl;
            return;
        }
    }
    cout << "The string is a palindrome." << endl;
}

int main()
{
    string input;
    cout << "Enter a string: ";
    cin >> input;
    isPalindrome(input);
    return 0;
}
