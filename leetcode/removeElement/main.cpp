#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int endptr = nums.size()-1;

        int countRemoved = 0;
        int vectSize = nums.size();

        for (int i = 0; i < vectSize; i++) {
            if (nums[i] == -1) {
                //return vectSize-countRemoved;

                return i;

            }

            if (nums[i] == val) {

                nums[i] = nums[endptr];
                nums[endptr] = -1;
                endptr -=1;
                i--;
                countRemoved+=1;
            }
        }

        return vectSize - countRemoved;

    }
};


int main() {
    Solution ans;

    // vector<int> numsVect = {0,1,2,2,3,0,4,2};
    vector<int> numsVect = {3,2,2,3};

    // removeElement(numsVect, 2);
    cout << "after ans" << endl;
    // ans.removeElement(numsVect, 2);
    ans.removeElement(numsVect, 3);

    // cout << "answer = " << ans << endl;

    for (int i = 0; i < numsVect.size(); i++) {

        // cout << "enter for loop in main" << endl;
        cout << numsVect[i] << " ";

    }
    cout << endl;

    return 0;
}
