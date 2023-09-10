#include <bits/stdc++.h>

using namespace std;

class Solution {
public:

    // O(3N) = O(N) Mapping Solution
    int longestConsecutive(vector<int>& nums) {
        
        int n = nums.size();
        unordered_map<int, int> mp;

        for(int i = 0; i < n; i++){
            mp[nums[i]] = 1;
        }

        for(int i = 0; i < n; i++){
            if(mp.find(nums[i] - 1) != mp.end()){
                mp[nums[i]] = 0;
            }
        }

        int longestLen = 0;

        for(int i = 0; i < n; i++){
            if(mp[nums[i]] == 1){
                int length = 1;

                while(mp.find(nums[i] + length) != mp.end()){
                    length++;
                }
                longestLen = max(longestLen, length);
            }
        }

        return longestLen;
    }


    // FASTER - O(N logN) Sorting Solution
    int longestConsecutiveSorting(vector<int>& nums) {
        
        if(nums.size() == 0){
            return 0;
        }

        sort(nums.begin(), nums.end());

        int maxLength = 0;
        int curLength = 1;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i - 1] + 1){
                curLength++;
            }
            else if(nums[i] != nums[i - 1]){
                maxLength = max(maxLength, curLength);
                curLength = 1;
            }
        }

        maxLength = max(maxLength, curLength);

        return maxLength;
    }

    // Set solution
    int longestConsecuiveSet(vector<int> &nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0;
        for (auto &n: s) {
            if (!s.count(n - 1)) {
                int length = 1;
                while (s.count(n + length)) {
                    length++;
                }
                longest = max(longest, length);
            }
        }
        return longest;
    }
};