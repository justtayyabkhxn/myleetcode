class Solution {
public:
    //BRUTEFORCE
    // void findsubset(int index,int N,set<vector<int>> &ans,vector<int> &nums,vector<int> &arr)
    // {
    //     if(index>=N)
    //     {
    //         ans.insert(arr);
    //         return;
    //     }
    //     arr.push_back(nums[index]);
    //     findsubset(index+1,N,ans,nums,arr);
    //     arr.pop_back();
    //     findsubset(index+1,N,ans,nums,arr);

    // }

    void findsubset(int index,vector<int> &arr,vector<int> &nums,vector<vector<int>> &ans)
    {
        ans.push_back(arr);
        for(int i=index;i<nums.size();i++)
        {
            if(i!=index && nums[i]==nums[i-1]) continue;
            arr.push_back(nums[i]);
            findsubset(i+1,arr,nums,ans);
            arr.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        //METHOD #1 BRUTEFORCE
        // set<vector<int>> ans;
        //  vector<int> arr;
        //  sort(nums.begin(),nums.end());
        // findsubset(0,nums.size(),ans,nums,arr);
        // vector<vector<int>> ansarr;
        // for(auto itr:ans)
        // {
        //     ansarr.push_back(itr);
        // }
        // return ansarr;

        //METHOD #2 OPTIMAL
        vector<vector<int>> ans;
        vector<int> arr;
        sort(nums.begin(),nums.end());
        findsubset(0,arr,nums,ans);
        return ans;
    }
};