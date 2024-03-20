class Solution {
public:
    int findsumarr(vector<int>& nums,int k,int mid)
    {
        int n=nums.size();
        int count=1;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            if(sum+nums[i]<=mid)
            {
                sum+=nums[i];
            }
            else {
                count++;
                sum=nums[i];
            }

        }
        return count;
    }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int low=INT_MIN;
        long long high=0;
        for(int i=0;i<n;i++)
        {
            low=max(low,nums[i]);
            high+=nums[i];
        }
        if(k==n) return low;
        int ans=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            ans=findsumarr(nums,k,mid);
            if(ans<=k) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};