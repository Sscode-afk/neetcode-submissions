class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //dynamic sliding window
        int longest = 0;
        int left = 0;

        unordered_set<char> seen;
        for (int right = 0; right < s.size(); right++) {
            if (seen.count(s[right])) {
                //duplicate
                //run the loop while duplicates are still there...
                while ((seen.count(s[right]))) {
                    //since the active substring changes, we remove the char
                    seen.erase(s[left]);
                    left+=1;
                }
                seen.insert(s[right]);
            }
            else {
                seen.insert(s[right]);
                if (right-left+1>longest) longest = right-left+1;
            }
        }
        return longest;
    }
};
