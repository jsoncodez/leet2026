
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int right = 0;
        map<char,int> mp;

        int maxCount = 0;
        int currentCount = 0;

        for (int i = 0; i <= s.length(); i++) {

            while (!mp.contains(s[right]) and right < s.length()) {

                cout << s[right] << endl;
                mp[s[right]]++;
                right++;
                currentCount++;


            }

            if (currentCount > maxCount) {
                maxCount = currentCount;
            }
            currentCount--;

            cout << "maxCount = " << maxCount << endl;

            mp.erase(s[i]);

            cout << "for loop end" << endl;


        }


        return maxCount;
    }
};


int main() {
    Solution ans;

    string s = "dvdf";

    cout << ans.lengthOfLongestSubstring(s) << endl;


    return 0;
}
