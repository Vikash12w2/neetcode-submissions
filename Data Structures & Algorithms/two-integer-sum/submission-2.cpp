class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            int x = target-nums[i];
            if(mp.count(nums[i])){
                return {mp[nums[i]], i};
            }
            mp[x] = i;
        }
        return {-1,-1};
    }
};
