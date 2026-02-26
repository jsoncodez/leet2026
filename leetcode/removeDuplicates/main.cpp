#include <filesystem>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        map<int, int> mp;

        int endptr = nums.size()-1;
        int count = 0;

        for (count; count < nums.size(); count++) {
            if (nums[count] == -200) {
                break;

            }

            if (mp.contains(nums[count])) {

                nums[count] = nums[endptr];
                nums[endptr] = -200;

                endptr--;
                count--;
            }
            else {
                mp[nums[count]] = count;


            }
        }

        int idxCount = 0;

        for (auto it = mp.begin(); it != mp.end(); it++) {

            nums[idxCount] = it->first;
            idxCount++;

        }




        return count;


    }
};

int main() {
    vector<int> nums = {0,0,5,5,5,2,2,3,3,4};

    Solution ans;
    ans.removeDuplicates(nums);

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";


    }
    cout << endl;
    return 0;
}
