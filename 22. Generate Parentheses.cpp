class Solution {
public:
    void solve(vector<string>&ans,string op,int open, int close){
        if(!open && !close){
            ans.push_back(op);
            return ;
        }
        if(open){
            string op1=op+'(';
            solve(ans,op1,open-1,close);
        }
        if(open<close && close>0){
            string op2=op+')';
            solve(ans,op2,open,close-1);
            return ;
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        int open=n,close=n;
        string op="";
        solve(ans,op,open,close);
        return ans;
    }
};
