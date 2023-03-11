#include <iostream>
#include <string>

using namespace std;

int longest_common_subsequence(string s1, string s2)
{
    int m = s1.length();
    int n = s2.length();

    int lcs[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                lcs[i][j] = 0;
            else if (s1[i - 1] == s2[j - 1])
                lcs[i][j] = lcs[i - 1][j - 1] + 1;
            else
                lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
        }
    }
    return lcs[m][n];
}

int main()
{
    string s1, s2;
    cout << "Enter string s1: ";
    getline(cin, s1);
    cout << "Enter string s2: ";
    getline(cin, s2);
    int length = longest_common_subsequence(s1, s2);
    cout << "Length of the longest common subsequence: " << length << endl;
    return 0;
}