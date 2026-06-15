#include <iostream>
#include <vector>
#include <map>
#include <algorithm>


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        map<string, vector<string>> mp;

        for (string s : strs) {

            string key = s;
            sort(key.begin(), key.end());

            mp[key].push_back(s);
        }

        vector<vector<string>> result;

        for (auto& [key, group] : mp) {
            result.push_back(group);
        }

        return result;
    }
};

int main() {
    vector<string> strs = {"",""};
    // vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    Solution s;
    s.groupAnagrams(strs);



    return 0;
}
