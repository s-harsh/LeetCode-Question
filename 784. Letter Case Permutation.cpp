class Solution {
public:
    void solve(string s, vector<string>& ans, string opt) {
        if (s.size() == 0) {
            ans.push_back(opt);
            return;
        }
        if(isalpha(s[0])){
            string op1 = opt + (char)tolower(s[0]);
            string op2 = opt + (char)toupper(s[0]);
            s.erase(s.begin());
            solve(s, ans, op1);
            solve(s, ans, op2);
            return;
        }
        string op1=opt+s[0];
        s.erase(s.begin());
        solve(s,ans,op1);
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        string opt = "";
        solve(s, ans, opt);
        return ans;
    }
};
