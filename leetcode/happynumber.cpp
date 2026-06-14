#include <iostream>
#include <string>
#include <cmath>

using namespace std;


class Solution {
public:
    bool isHappy(int n) {


        int digit;
        string strDigit;
        int sum = 0;
        int count = 0;
        string strNum =to_string(n);
        

        while (count <= 16) {
            sum = 0;
            for (int i = 0; i < strNum.length(); i++) {

                strDigit = strNum.substr(i,1);
                digit = stoi(strDigit);

                sum += pow(digit,2);
            }

            if (sum == 1) {
                return true;
            }

            strNum = to_string(sum);
            count++;

        }

        return false;

    }
};


int main() {

    int n = 2;

    Solution s;
    s.isHappy(n);

    return 0;
}
