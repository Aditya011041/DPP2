#include <iostream>
#include <string>

using namespace std;

string convertToKeypadSequence(char c)
{
    switch (tolower(c))
    {
    case 'a':
    case 'b':
    case 'c':
        return "2";
    case 'd':
    case 'e':
    case 'f':
        return "3";
    case 'g':
    case 'h':
    case 'i':
        return "4";
    case 'j':
    case 'k':
    case 'l':
        return "5";
    case 'm':
    case 'n':
    case 'o':
        return "6";
    case 'p':
    case 'q':
    case 'r':
    case 's':
        return "7";
    case 't':
    case 'u':
    case 'v':
        return "8";
    case 'w':
    case 'x':
    case 'y':
    case 'z':
        return "9";
    default:
        return "";
    }
}

string convertSentenceToKeypadSequence(string sentence)
{
    string keypadSequence = "";
    for (char c : sentence)
    {
        string sequence = convertToKeypadSequence(c);
        if (!sequence.empty())
        {
            keypadSequence += sequence;
        }
    }
    return keypadSequence;
}

int main()
{
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    string keypadSequence = convertSentenceToKeypadSequence(sentence);
    cout << "Keypad sequence: " << keypadSequence << endl;
    return 0;
}