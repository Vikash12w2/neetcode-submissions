class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size()-1;
        int max_amount = 0;

        while(left<right){
            int height = min(heights[left], heights[right]);
            int water = (right-left)*height;
            if(water>max_amount){
                max_amount = water;
            }
            if(heights[left] > heights[right]){
                right--;
            }
            else{
                left++;
            }
        }
        return max_amount;
    }
};
