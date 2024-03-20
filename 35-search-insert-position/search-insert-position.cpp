class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int ans=n;
        int low=0,high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]>=target) 
            {
            ans=mid;
            high=mid-1;

            }
            else if(nums[mid]<target) low=mid+1;
            else return mid;
        }
        return ans;
    }
};