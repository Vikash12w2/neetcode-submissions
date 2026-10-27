class Solution {
public:
    void backtrack(vector<int>& nums, int idx, int target, vector<vector<int>>& ans, vector<int>& temp){
        if(temp.size() == 3){
            if(target == 0){
                ans.push_back(temp);
            }
            return;
        }
        for(int i = idx; i < nums.size(); i++){
            if(i > idx && nums[i] == nums[i-1]){
                continue;
            }
            temp.push_back(nums[i]);
            backtrack(nums, i+1, target-nums[i], ans, temp);
            temp.pop_back();
        }
        return;
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> temp;
        backtrack(nums, 0, 0, ans, temp);
        return ans;
    }
};
