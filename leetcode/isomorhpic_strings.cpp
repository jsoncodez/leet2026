#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>


using namespace std;



class Solution {
public:

    void printMap (unordered_map<char, char> &s_map) {
        for (auto& pair : s_map) {

            cout << pair.first << " : " << pair.second << endl;
        }

    }
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> s_map;
        unordered_map<char, char> t_map;

        for (int i = 0; i < s.length(); i++) {

            if (s_map.contains(s[i])) {
                if (t[i] != s_map[s[i]]) {
                    return false;
                }
            }
            if (t_map.contains(t[i])) {
                if (s[i] != t_map[t[i]]) {
                    return false;
                }
            }



            s_map[s[i]] = t[i];
            t_map[t[i]] = s[i];


        }

        printMap(s_map);




        return true;
    }

};


int main() {
    string s = "badc";
    string t = "baba";

    Solution ans;
    if (ans.isIsomorphic(s,t) == 1) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }






    return 0;
};
