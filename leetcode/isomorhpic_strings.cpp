#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>


using namespace std;



class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> s_map;
        unordered_map<char, char> t_map;

        for (int i = 0; i < s.length(); i++) {
            char s_char = s[i];
            char t_char = t[i];

            if (s_map.count(s_char)) {
                if (s_map[s_char] != t_char) {
                    return false;

                }
            }
            else {
                s_map[s_char] = t_char;
            }



            if (t_map.count(s_char)) {
                if (t_map[t_char] != s_char) {
                    return false;
                }
            }
            else {
                t_map[t_char] = s_char;
            }
        }




        return true;
    }

};


int main() {
    string s = "egg";
    string t = "add";

    Solution ans;
    if (ans.isIsomorphic(s,t) == 1) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }






    return 0;
};
