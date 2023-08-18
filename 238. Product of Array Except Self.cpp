class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeroCount=0,p=1,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zeroCount++;
                continue;
            }
            p*=nums[i];
        }
        vector<int>vec;
        for(int i=0;i<n;i++){
            if(zeroCount>1){
                vec.push_back(0);
            }
            else if(zeroCount==1){
                vec.push_back(nums[i]==0?p:0);
            }
            else{
                vec.push_back(p/nums[i]);
            }
        }
        return vec;
    }
};
