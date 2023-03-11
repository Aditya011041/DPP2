#include <iostream>
#include <string>

using namespace std;

int longest_common_subsequence(string s1, string s2, string &lcs)
{
    int m = s1.length();
    int n = s2.length();

    int lcsLength[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                lcsLength[i][j] = 0;
            else if (s1[i - 1] == s2[j - 1])
                lcsLength[i][j] = lcsLength[i - 1][j - 1] + 1;
            else
                lcsLength[i][j] = max(lcsLength[i - 1][j], lcsLength[i][j - 1]);
        }
    }

    // Building the longest common subsequence
    int i = m, j = n;
    while (i > 0 && j > 0)
    {
        if (s1[i - 1] == s2[j - 1])
        {
            lcs = s1[i - 1] + lcs;
            i--;
            j--;
        }
        else if (lcsLength[i - 1][j] > lcsLength[i][j - 1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }

    return lcsLength[m][n];
}

int main()
{
    string s1, s2, lcs;
    cout << "Enter string s1: ";
    getline(cin, s1);
    cout << "Enter string s2: ";
    getline(cin, s2);
    int length = longest_common_subsequence(s1, s2, lcs);
    cout << "Length of the longest common subsequence: " << length << endl;
    cout << "Longest common subsequence: " << lcs << endl;
    return 0;
}