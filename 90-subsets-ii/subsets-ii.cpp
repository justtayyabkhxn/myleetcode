class Solution {
public:
    void findsubset(int index,int N,set<vector<int>> &ans,vector<int> &nums,vector<int> &arr)
    {
        if(index>=N)
        {
            ans.insert(arr);
            return;
        }
        arr.push_back(nums[index]);
        findsubset(index+1,N,ans,nums,arr);
        arr.pop_back();
        findsubset(index+1,N,ans,nums,arr);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> ans;
         vector<int> arr;
         sort(nums.begin(),nums.end());
        findsubset(0,nums.size(),ans,nums,arr);
        vector<vector<int>> ansarr;
        for(auto itr:ans)
        {
            ansarr.push_back(itr);
        }
        // sort(ansarr.begin(),ansarr.end());
        return ansarr;
    }
};