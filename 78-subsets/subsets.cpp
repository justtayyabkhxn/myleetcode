class Solution {
public:
    void findsubset(int index,int N,vector<vector<int>> &ans,vector<int> &nums,vector<int> &arr)
    {
        if(index==N)
        {
            ans.push_back(arr);
            return;
        }
        arr.push_back(nums[index]);
        findsubset(index+1,N,ans,nums,arr);
        arr.pop_back();
        findsubset(index+1,N,ans,nums,arr);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
         vector<vector<int>> ans;
         vector<int> arr;
        findsubset(0,nums.size(),ans,nums,arr);
        return ans;
    }
};