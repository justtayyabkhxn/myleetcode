class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            maxi=max(maxi,nums[i]);
        }
        vector<int> hasharr;
        for(int i=0;i<=maxi;i++)
        {
            hasharr.push_back(0);
        }
        for(int i=0;i<nums.size();i++)
        {
            hasharr[nums[i]]++;
        }
        vector<int> ans;
        for(int i=1;i<=maxi;i++)
        {
            if(hasharr[i]==2) ans.push_back(i);
        }
        return ans;
    }
};