class Solution {
public:
    void findcomb(int index, int target, vector<int>& candidates,vector<int>& arr, vector<vector<int>>& ans) {
            if (target == 0) {
                ans.push_back(arr);
            return;
            }
       for(int i=index;i<candidates.size();i++) {
            if(i>index && candidates[i]==candidates[i-1]) continue;
            if(candidates[i]>target) break;
            arr.push_back(candidates[i]);
            findcomb(i+1, target - candidates[i], candidates, arr, ans);
            arr.pop_back();
        }
        return;
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        vector<int> arr;
        findcomb(0,target,candidates,arr,ans);
        return ans;

    }
};