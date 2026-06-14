#include <iostream>
#include <string>
#include <unordered_map>
#include <map>
#include <sstream>
#include <vector>

using namespace std;


class Solution {

public:
    void printMap(map<char, string> &mp) {
        for (auto &pair : mp) {
            cout << pair.first << ": " << pair.second << endl;
        }

        cout << "----------" << endl;
    }

    bool wordPattern(string pattern, string s) {

        vector<string> s_vector;
        vector<string> pattern_vector;
        stringstream ss(s);
        string word;

        map<char, string> mp;
        map<string, char> mp2;



        while (ss >> word) {
            s_vector.push_back(word);

        }

        if (s_vector.size() != pattern.size()) {
            return false;
        }
        

        for (int i = 0; i < pattern.length(); i++) {

            auto it = mp.find(pattern[i]);


            if (it != mp.end() && it->second != s_vector[i]) {

                return false;

            }

            mp[pattern[i]] = s_vector[i];

            auto it2 = mp2.find(s_vector[i]);

            if (it2 != mp2.end() && it2->second != pattern[i]) {
                cout << "false2"<<endl;
                return false;
            }

            mp2[s_vector[i]] = pattern[i];

        }


        cout << "true" << endl;
        return true;


    }
};


int main() {


    string pattern = "abba";
    string s = "dog dog dog dog";



    Solution solve;
    solve.wordPattern(pattern, s);
    return 0;
}
