// Variable sized sliding window problem

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        if(fruits.size()==1){
            return 1;
        }
        int i=0,j=0,n=fruits.size(),ans=0;
        unordered_map<int,int>mp;
        while(j<n){
            mp[fruits[j]]++;
            while(mp.size()>2){
                mp[fruits[i]]--;
                if(mp[fruits[i]]==0){
                    mp.erase(fruits[i]);
                }
                i++;
            }
            ans=max(ans,(j-i+1));
            j++;
        }
        return ans;
    }
};
