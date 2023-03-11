#include <iostream>
#include <string>
using namespace std;

bool isIsomorphic(string s, string t)
{
    if (s.length() != t.length())
    {
        return false;
    }

    int map[256] = {0}; // array to store mappings

    for (int i = 0; i < s.length(); i++)
    {
        char s_char = s[i];
        char t_char = t[i];

        if (map[s_char] == 0)
        {
            // add new mapping
            map[s_char] = t_char;
        }
        else if (map[s_char] != t_char)
        {
            // invalid mapping
            return false;
        }
    }

    return true;
}

int main()
{
    string s, t;
    cout << "Enter string 1: ";
    cin >> s;
    cout << "Enter string 2: ";
    cin >> t;

    if (isIsomorphic(s, t))
    {
        cout << "Strings are isomorphic." << endl;
    }
    else
    {
        cout << "Strings are not isomorphic." << endl;
    }

    return 0;
}