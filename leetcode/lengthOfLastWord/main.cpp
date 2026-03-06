//Both methods work.

#include <iostream>
#include <vector>
#include <string>


using namespace std;


class Solution {
public:
    int lengthOfLastWord(string s) {

        int i = s.length()-1;
        int startIdx = s.length()-1;

        //while (s[i] == ' ' or s[i] == '\t' or s[i] == '\n' or s[i] == '\0') {
        // s.erase(i,1);
        // i--;
        //}

        while (s[startIdx] == ' ' or s[startIdx] == '\t' or s[startIdx] == '\n' or s[startIdx] == '\0') {

            cout << startIdx << endl;
            startIdx--;

        }

        int charCount = 0;
        // for (int i = s.length() - 1; i >= 0; i--) {
        for (int i = startIdx; i >= 0; i--) {
            if (s[i] != ' ') {

                charCount++;

            }
            else {

                return charCount;
            }
        }

        return charCount;

    }
};


int main() {
    Solution ans;
    string s = "   fly me   to   the moon  ";

    cout << ans.lengthOfLastWord(s) << endl;





    return 0;
}
