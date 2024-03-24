class Solution {
public:
    void findcomb(int index, int target, vector<int>& candidates,
                  vector<int>& arr, vector<vector<int>>& ans) {
        if (index == candidates.size()) {
            if (target == 0) {
                ans.push_back(arr);
            }
            return;
        }
        if (candidates[index] <= target) {
            arr.push_back(candidates[index]);
            findcomb(index, target - candidates[index], candidates, arr, ans);
            arr.pop_back();
        }
        findcomb(index + 1, target, candidates, arr, ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> arr;
        findcomb(0, target, candidates, arr, ans);
        return ans;
    }
};