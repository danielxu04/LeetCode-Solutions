#include <bits/stdc++.h>

using namespace std;

bool isDuplicate(vector<int> &nums){ 

    unordered_map<int, int> checkInt;

    for (int i = 0; i < nums.size(); i++) {

        if(checkInt.find(nums[i]) != checkInt.end()){
            return true;
        }
        else{
            checkInt[nums[i]] = i;
        }
    }

    return false;
}