#include <bits/stdc++.h>
using namespace std;

int shortestPalindrome(const string &str) {
    int n = str.size();
    // dp[i][j] will store the minimum number of insertions needed to make str[i..j] a palindrome
    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int length = 2; length <= n; ++length) {
        for (int i = 0; i <= n - length; ++i) {
            int j = i + length - 1;
            if (str[i] == str[j]) {
                dp[i][j] = dp[i + 1][j - 1];
            } else {
                dp[i][j] = min(dp[i + 1][j], dp[i][j - 1]) + 1;
            }
        }
    }
    return dp[0][n - 1];
}

int main() {
    string str;
    cin >> str;
    int result = shortestPalindrome(str);
    cout<<result << endl;
    return 0;
}
