#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int maxP = 0;
        int minP = INT_MAX;

        for (int i = 0; i < prices.size(); i++){
            minP = min(minP, prices[i]);
            maxP = max(maxP, prices[i] - minP);
        }
        return maxP;
    }
};