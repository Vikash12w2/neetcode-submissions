class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p = 1;
        for(int i : nums){
            p *= i;
        }
        vector<int> ans;

        for(int i = 0; i<nums.size(); i++){
            int pro = 1;
            if(nums[i] == 0){
                for(int j = 0; j<nums.size(); j++){
                    if(j == i){
                        continue;
                    }
                    pro *= nums[j];
                }
                ans.push_back(pro);
            }
            else{
                pro = p/nums[i];
                ans.push_back(pro);
            }
        }
        return ans;
    }
};
