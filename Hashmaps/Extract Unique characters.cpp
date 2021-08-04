#include <unordered_map>

string uniqueChar(string str) {

    string ans = "";

    unordered_map < char, int > mp;

    for (int i = 0; i < str.length(); i++) {

        if (mp.count(str[i]) == 0) {
            ans += str[i];
            mp[str[i]] = 1;
        }

    }
    
    return ans;
}
