class Solution {
public:
    void solve(vector<vector<int>>& ans, vector<int>& result, vector<int>& arr, int t, int i) {
        if (t == 0) {
            ans.push_back(result);
            return;
        }
        if (i == arr.size() || t < 0) {
            return;
        }

        // Include the current element
        result.push_back(arr[i]);
        solve(ans, result, arr, t - arr[i], i + 1);
        // Exclude the current element
        result.pop_back();

        // Skip duplicates
        while (i < arr.size() - 1 && arr[i] == arr[i + 1]) {
            i++;
        }

        // Move to the next unique element
        solve(ans, result, arr, t, i + 1);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> result;
        sort(candidates.begin(), candidates.end());
        solve(ans, result, candidates, target, 0);
        return ans;
    }
};
