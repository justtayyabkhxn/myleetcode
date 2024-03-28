class Solution {
public:
    void recurpermute(vector<int>& nums,vector<int> &arr,vector<int> &freq,vector<vector<int>> &ans)
    {
        if(arr.size()==nums.size())
        {
            ans.push_back(arr);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(!freq[i])
            {
                arr.push_back(nums[i]);
                freq[i]=1;
                recurpermute(nums,arr,freq,ans);
                freq[i]=0;
                arr.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> arr;
        vector<int> freq(nums.size());
        recurpermute(nums,arr,freq,ans);
        return ans;
    }
};