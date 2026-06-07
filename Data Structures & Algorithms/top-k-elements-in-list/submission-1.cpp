class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> output;
        unordered_map<int,int> occur;
        
        for (auto& num:nums) {
            occur[num] += 1;
        }
        std::vector<std::pair<int,int>> vec(occur.begin(),occur.end());
        std::sort(vec.begin(),vec.end(),[](const std::pair<int,int>& a,const std::pair<int,int>& b) {return a.second>b.second;});
        for (int i = 0;i<k;i++) {
            output.push_back(vec[i].first);
        }
        return output;
    }
};
