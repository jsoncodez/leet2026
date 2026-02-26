#include <iostream>
#include <map>
#include <vector>



using namespace std;


class Solution {
public:
    int majorityElement(vector<int>& nums) {

        map<int, int> m;

        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;

        }

        int maxKey = 0;
        int maxCount = 0;


        for (auto i : m) {
            cout << i.first << " " << i.second << endl;

            if (i.second > maxCount) {
                maxKey = i.first;
                maxCount = i.second;
            }
        }

        cout << maxKey << endl;
        return maxKey;
    }
};

int main() {

    /*
    *Constraints:

    n == nums.length
    1 <= n <= 5 * 104
    -109 <= nums[i] <= 109
    */

    Solution ans;

    vector<int> nums = {2,2,1,1,1,2,2};
    // output = 2

    ans.majorityElement(nums);

    return 0;
}
