class Solution {
public:
    //METHOD #1 BUT TLE
    // int findpossibleproduct(int index,long long product,vector<int> &nums,int k,int count)
    // {
    //     for(int i=index;i<nums.size();i++)
    //     {
    //         if(product>=k) continue;
    //         product*=nums[i];
    //         if(product<k) count++;
    //         // else break;
    //     }
    //     return count;
    // }
    // int numSubarrayProductLessThanK(vector<int>& nums, int k) {
    //     // sort(nums.begin(),nums.end());
    //     int ans=0;
    //     for(int i=0;i<nums.size();i++)
    //     {
    //         ans+=findpossibleproduct(i,1,nums,k,0);
    //     }
    //     return ans;
    // }


    //METGO #2 SLIDING WINDOW
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int start=0,end=0,count=0;
        if(nums.size()==0) return 0;
        if(k==0) return 0;
        long long prd=1;
        while(end<nums.size())
        {
            prd*=nums[end];
            while(start<end && prd>=k)
            {
                prd/=nums[start];
                start++;
            }
            if(prd<k) count+=(end-start+1);
            end++;
        }
        return count;

    }
};