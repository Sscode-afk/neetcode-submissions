class Solution {
public:
    bool isValid(string s) {
        vector<char> stacks;
        for (auto& literal:s) {
            if (literal==')') {
                if (stacks.empty() || stacks.back()!='(') return false;
                stacks.pop_back();
            }
            else if (literal=='}') {
                if (stacks.empty() || stacks.back()!='{') return false;
                stacks.pop_back();
            }
            else if (literal==']') {
                if (stacks.empty() || stacks.back()!='[') return false;
                stacks.pop_back();
            }
            else stacks.push_back(literal);
            
        }
        if (stacks.empty()) return true;
        return false;
    }
};
