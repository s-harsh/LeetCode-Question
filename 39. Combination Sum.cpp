class Solution {
public:
    void solve(int n,int idx,int t,vector<int> c,vector<vector<int>>&ans,vector<int>vec){
        if(idx==n && t==0){
            ans.push_back(vec);
        }
        if(idx==n || t<0){
            return ;
        }
        vec.push_back(c[idx]);
        solve(n, idx, t - c[idx], c, ans, vec);
        vec.pop_back(); // Backtrack
        solve(n,idx+1,t,c,ans,vec);
        return ;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        int idx=0,n=candidates.size();
        vector<int>vec;
        solve(n,0,target,candidates,ans,vec);
        return ans;
    }
};
