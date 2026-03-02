#include <iostream>
#include <vector>

using namespace std;



class Solution {
public:

    void printHelp(vector<int> &vectToPrint) {
        /****************** PRINT HELPER BELOW ****************/

        for (int i = 0; i < vectToPrint.size(); i++) {
            cout << vectToPrint[i] << ", ";
        }
        cout << endl;
        /******************************************************/
    }

    int minSubArrayLen(int target, vector<int>& nums) {

        vector<int> subVector(nums.size(), NULL);
        int currentSum = 0;
        int j = 0;

        int minSubVect = nums.size()+1;

        for (int i = 0; i < nums.size(); i++) {
            currentSum += nums[i];

            while (currentSum >= target and j < nums.size()) {
                if (i-j < minSubVect) {
                    minSubVect = i-j+1;
                    subVector.resize(minSubVect);
                    subVector.assign(nums.begin()+j, nums.begin()+i+1);

                }
                currentSum -= nums[j];
                j++;
            }
        }

        cout << "PRINTING ORIGINAL VECTOR" << endl;
        printHelp(nums);

        cout << "PRINTING SUB VECTOR" << endl;
        printHelp(subVector);
        if (minSubVect == nums.size()+1) {
            return 0;
        }
        return minSubVect;
    }
};

int main() {
    Solution ans;

    int target = 15;
    vector<int> nums = {1,2,3,4,5};

    ans.minSubArrayLen(target, nums);


}
