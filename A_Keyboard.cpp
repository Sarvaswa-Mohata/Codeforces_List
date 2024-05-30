#include <bits/stdc++.h>
using namespace std;

int main() {
    char t;
    string s;
    cin >> t >> s;

    vector<char> vec_v1 = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
    vector<char> vec_v2 = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';'};
    vector<char> vec_v3 = {'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'};

    map<char, int> index_map;
    for (int i = 0; i < vec_v1.size(); i++) {
        index_map[vec_v1[i]] = i;
    }
    for (int i = 0; i < vec_v2.size(); i++) {
        index_map[vec_v2[i]] = i;
    }
    for (int i = 0; i < vec_v3.size(); i++) {
        index_map[vec_v3[i]] = i;
    }

    int flag = (t == 'R') ? -1 : 1;

    for (char c : s) {
        if (index_map.find(c) != index_map.end()) {
            int index = index_map[c];
            if (find(vec_v1.begin(), vec_v1.end(), c) != vec_v1.end()) {
                cout << vec_v1[index + flag];
            } else if (find(vec_v2.begin(), vec_v2.end(), c) != vec_v2.end()) {
                cout << vec_v2[index + flag];
            } else if (find(vec_v3.begin(), vec_v3.end(), c) != vec_v3.end()) {
                cout << vec_v3[index + flag];
            }
        }
    }

    return 0;
}
