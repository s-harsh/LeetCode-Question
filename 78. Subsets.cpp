class Solution {
public:
    void solve(vector<int>nums,vector<vector<int>>&ans,vector<int>output){
        if(nums.size()==0){
            ans.push_back(output);
            return ;
        }
        vector<int>op1=output;
        vector<int>op2=output;
        op2.push_back(nums[0]);
        nums.erase(nums.begin());
        solve(nums,ans,op1);
        solve(nums,ans,op2);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>output;
        solve(nums,ans,output);
        return ans;
    }
};
