#include <iostream>
#include <vector>
#include<string>
#include <stack>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {

        string currentWord = "";

        stack<string> wordStack;

        for (int i = 0; i < s.size(); i++) {

            if ((s[i] >='a' && s[i] <= 'z') or (s[i] >='A' && s[i] <= 'Z') or (s[i] >='0' && s[i] <= '9')) {
                currentWord += s[i];
            }
            else if (currentWord != "") {
                wordStack.push(currentWord);
                currentWord = "";
            }
        }

        if (currentWord != "") {
            wordStack.push(currentWord);
        }

        currentWord = "";

        while (!wordStack.empty()) {

            if (wordStack.top() != "") {
                currentWord += wordStack.top();
            }

            if (wordStack.size() != 1) {
                currentWord += " ";
            }

            wordStack.pop();
        }

        return currentWord;
    }
};

int main() {

    Solution ans;
    // string s = "the sky is blue";
    string s = "EPY2giL";
    // string s = " hello world ";

    // need output "blue is the sky" -> no leading and trailing formatting

    // ans.reverseWords(s);
    cout << ans.reverseWords(s) << endl;

    return 0;
}
