#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minPossibleSize(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int count = 0;
    
    for (int i = 0; i < n; ++i) {
        if (arr[i] * 2 <= arr[n-1]) {
            count = n - i - 1;
            break;
        }
    }
    
    return n - count;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << minPossibleSize(arr) << endl;
    return 0;
}
