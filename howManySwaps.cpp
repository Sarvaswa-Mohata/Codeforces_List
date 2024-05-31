#include <bits/stdc++.h>
using namespace std;

long mergeAndCount(vector<int>& arr, int left, int mid, int right) {
    vector<int> leftSub(arr.begin() + left, arr.begin() + mid + 1);
    vector<int> rightSub(arr.begin() + mid + 1, arr.begin() + right + 1);

    int i = 0, j = 0, k = left;
    long swaps = 0;

    while (i < leftSub.size() && j < rightSub.size()) {
        if (leftSub[i] <= rightSub[j]) {
            arr[k++] = leftSub[i++];
        } else {
            arr[k++] = rightSub[j++];
            swaps += leftSub.size() - i;
        }
    }

    while (i < leftSub.size()) {
        arr[k++] = leftSub[i++];
    }

    while (j < rightSub.size()) {
        arr[k++] = rightSub[j++];
    }

    return swaps;
}

long mergeSortAndCount(vector<int>& arr, int left, int right) {
    long count = 0;
    if (left < right) {
        int mid = left + (right - left) / 2;

        count += mergeSortAndCount(arr, left, mid);
        count += mergeSortAndCount(arr, mid + 1, right);
        count += mergeAndCount(arr, left, mid, right);
    }
    return count;
}

long howManySwaps(vector<int> arr) {
    return mergeSortAndCount(arr, 0, arr.size() - 1);
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    cout << howManySwaps(v) << endl;
    return 0;
}
