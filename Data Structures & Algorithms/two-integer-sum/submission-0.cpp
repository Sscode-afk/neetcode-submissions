class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //nums has exactly one answer always
        std::unordered_map<int,int> seen;
        for (int i = 0; i < nums.size(); i++) {
            if (seen.count(nums[i])) {
                return {seen[nums[i]],i};
            }
            seen[target - nums[i]] = i;
        }
               
    }
};
