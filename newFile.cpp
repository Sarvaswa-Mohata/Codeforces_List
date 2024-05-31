#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

int maxPalindromicStrings(vector<string> &arr) {
    int n = arr.size();
    int maxPalindromic = 0;

    // Count frequency of characters in each string
    vector<unordered_map<char, int>> freq(n);
    for (int i = 0; i < n; ++i) {
        for (char c : arr[i]) {
            freq[i][c]++;
        }
    }

    // Calculate maximum number of palindromic strings
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int pairs = 0;
            for (auto it = freq[i].begin(); it != freq[i].end(); ++it) {
                char ch = it->first;
                int count = it->second;
                pairs += min(count, freq[j][ch]);
            }
            maxPalindromic += pairs;
        }
    }

    return maxPalindromic / 2; // Divide by 2 because each palindrome is counted twice
}

int main() {
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int result = maxPalindromicStrings(arr);
    cout << result << endl;
    return 0;
}
