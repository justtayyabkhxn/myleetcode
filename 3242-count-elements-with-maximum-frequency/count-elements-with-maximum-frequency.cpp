class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxfreq=0;
        int maxel=-1;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            maxel=max(maxel,nums[i]);
        }
        vector<int>hasharr(maxel+1,0);

        for(int i=0;i<nums.size();i++)
        {
            hasharr[nums[i]]++;
        }
        for(int i=0;i<hasharr.size();i++)
        {
            maxfreq=max(maxfreq,hasharr[i]);
        }
        int ans=0;
        for(int i=0;i<hasharr.size();i++)
        {
            if(hasharr[i]==maxfreq) ans+=hasharr[i];
        }
        return ans;
    }
};