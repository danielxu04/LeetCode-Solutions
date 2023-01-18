#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxArea = 0;

        while(left < right){
            int w = right - left;
            int h = min(height[right], height[left]);
            int area = h * w;
            maxArea = max(maxArea, area);

            if(height[right] < height[left]){
                right--;
            }
            else if(height[right] > height[left]){
                left++;
            }
            else{
                right--;
                left++;
            }
        }

        return maxArea;
    }
};