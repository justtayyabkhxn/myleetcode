class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int n=nums.size();
        int low=0;
        int high=n-1;
        int indexa=-1;
        int indexb=-1;        
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {
             indexa=mid;
             high=mid-1;
                
            }
            else if(nums[mid]>target) high=mid-1;
            else low=mid+1;
        }
       if(indexa==-1)
       {
        ans.push_back(-1);
        ans.push_back(-1);
        return ans; 
       }
        low=0;
        high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {
             indexb=mid;
            low=mid+1;
            }
            else if(nums[mid]>target) high=mid-1;
            else low=mid+1;
        }
        ans.push_back(indexa);
        ans.push_back(indexb);
        return ans;
    }
    
};