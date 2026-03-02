#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int sellIdx = 1;
        int buyPrice = prices[0]; //goal is for lowest
        int sellPrice = 0;
        int optimalProfit = 0;
        int currentProfit = 0;

        while (sellIdx < prices.size()) {

            sellPrice = prices[sellIdx];

            currentProfit = sellPrice - buyPrice;

            if (currentProfit > optimalProfit) {
                optimalProfit = currentProfit;
            }
            currentProfit = 0;

            if (buyPrice > sellPrice) {
                buyPrice = sellPrice;

            }

            sellIdx++;
        }

        return optimalProfit;
    }
};

int main() {

    vector<int> prices = {7,1,5,3,6,4};

    Solution ans;

    ans.maxProfit(prices);



    return 0;
}
