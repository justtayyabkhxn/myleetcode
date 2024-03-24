class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int maxi=INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            maxi=max(nums[i],maxi);
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
        for(int i=1;i<=hasharr.size();i++)
        {
            if(hasharr[i]>1) return nums[i];
        }
        return -1;
    }
};