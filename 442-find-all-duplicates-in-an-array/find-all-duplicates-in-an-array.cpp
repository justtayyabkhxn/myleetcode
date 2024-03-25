class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int maxi=INT_MIN;
        vector<int> hasharr(nums.size()+1,0);   
        for(int i=0;i<nums.size();i++)
        {
            hasharr[nums[i]]++;
        }
        vector<int> ans;
        for(int i=1;i<=nums.size();i++)
        {
            if(hasharr[i]==2) ans.push_back(i);
        }
        return ans;
    }
};