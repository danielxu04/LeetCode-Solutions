#include <bits/stdc++.h>

using namespace std;

class Codec {
public:

    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        string encoded = "";
        for (int i = 0; i < strs.size(); i++) {
            encoded += to_string(strs[i].size()) + '$' + strs[i];
        }
        cout << encoded;
        return encoded;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
        vector<string> v;
        int i = 0;
        while (i < s.size()) {
            int len = i;
            while (s[len] != '$') {
                len++;
            }
            int length = stoi(s.substr(i, len - i));
            string str = s.substr(len + 1, length);
            v.push_back(str);
            i = len + 1 + length;
        }
        return v;
    }
};