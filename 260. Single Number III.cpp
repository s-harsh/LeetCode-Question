// Approach 1
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>umap;
        for(auto x:nums){
            umap[x]++;
        }
        vector<int>vec;
        for(auto it:umap){
            if(it.second==1){
                vec.push_back(it.first);
            }
        }
        return vec;
    }
};
