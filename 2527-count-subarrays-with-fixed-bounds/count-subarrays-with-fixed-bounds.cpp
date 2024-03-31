class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans=0;
        int badboundary=-1;
        int left=-1;
        int right=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(!(minK<=nums[i] && maxK>=nums[i]))
            {
                badboundary=i;
            }
            if(nums[i]==minK)
            {
                left=i;
            }
            if(nums[i]==maxK)
            {
                right=i;
            }
            ans+=max(0,min(left,right)-badboundary);
        }
        return ans;
    }
};