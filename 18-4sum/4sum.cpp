class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums,int target) {
       set<vector<int>> st;
        int n=nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++) {
        //remove duplicates:
        if (i != 0 && nums[i] == nums[i - 1]) continue;
        for(int j=i+1;j<n;j++)
        {

            if (j != i+1 && nums[j] == nums[j - 1]) continue;
        //moving 2 pointers:

        int l=j+1;
        int k = n - 1;
        while (l < k) {
            long long sum = nums[i] + nums[j];
            sum+=nums[k]+nums[l];
            if (sum < target) {
                l++;
            }
            else if (sum > target) {
                k--;
            }
            else {
                vector<int> temp = {nums[i], nums[j],nums[l] ,nums[k]};
                ans.push_back(temp);
                l++;
                k--;
                //skip the duplicates:
                while (l < k && nums[l] == nums[l - 1]) l++;
                while (l < k && nums[k] == nums[k + 1]) k--;
            }
        }
        }
    }
    return ans;
    }
};