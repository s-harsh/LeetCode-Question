// MLE
class Solution {
public:
    vector<int> insert(vector<int>& v, int temp) {
        int len = v.size();
        if (len == 0 || v[len - 1] <= temp) {
            v.push_back(temp);
            return v;
        }
        int val = v[len - 1];
        v.pop_back();
        insert(v, temp);
        v.push_back(val);
        return v;
    }

    vector<int> sortArray(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums;
        }
        int temp = nums[nums.size() - 1];
        nums.pop_back();
        sortArray(nums);
        insert(nums, temp);
        return nums;
    }
};
