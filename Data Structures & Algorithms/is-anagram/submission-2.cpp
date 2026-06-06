class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()) return false;
        //all chars are lowercase, so I can use array for lower memory
        //also, n is only 26, O(n) is fine
        std::array<int,26> chars = {};
        
        for (int i = 0; i < s.size(); i++) {
            chars[s[i]-'a'] += 1;
            chars[t[i]-'a'] -=1;
        }
        //final array must be all 0 if they have the same count of chars and the same unique chars
        for (auto& count:chars) {
            if (count!=0) return false;
        }
        return true;
    }
};
