class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<std::vector<string>> output;
        //so, s and t are anagrams if they are same when sorted.
        auto sorted_str = [](string a) {
            std::sort(a.begin(),a.end());
            return a;
        };
        std::unordered_map<string,vector<string>> mapping;
        for (auto& str:strs) {
            string sorted = sorted_str(str);
            mapping[sorted].push_back(str);
        }
        for (auto& pairing:mapping) {
            output.push_back(pairing.second);
        }
        return output;
    }
};
