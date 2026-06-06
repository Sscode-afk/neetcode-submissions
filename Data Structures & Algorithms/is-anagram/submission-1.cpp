class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()) return false;
        //all chars are lowercase, so I can use array for lower memory
        //also, n is only 26, O(n) is fine
        std::array<int,26> s_chars = {};
        std::array<int,26> t_chars = {};
        for (int i = 0; i < s.size(); i++) {
            s_chars[s[i]-'a'] += 1;
            t_chars[t[i]-'a'] +=1;
        }
        for (auto& chr:s) {
            if (s_chars[chr-'a'] != t_chars[chr-'a']) return false;
        }
        return true;
    }
};
