class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long int freq=0;
        int maxel=0;
        long long int countmaxel=0;
        int first=0;
        int second=0;
        for(int i=0;i<nums.size();i++)
        {
            maxel=max(maxel,nums[i]);
        }
            while(second<nums.size())
            {
                if(nums[second]==maxel) countmaxel++;
                while(countmaxel>=k)
                {
                    if(nums[first]==maxel) countmaxel--;
                    first++;
                    freq+=nums.size()-second;
                }
                second++;
            }
        return freq;
    }
};