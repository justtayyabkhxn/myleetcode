class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int arrtest[m+n];
        int left=0;
        int right=0;
        int index=0;
        while(left<m && right<n)
        {
            if(nums1[left]>=nums2[right])
            {
                arrtest[index++]=nums2[right++];
            }
            else arrtest[index++]=nums1[left++];
        }
        while(left<m) 
        {
        arrtest[index++]=nums1[left++];

        }
        while(right<n) 
        {
        arrtest[index++]=nums2[right++];

        }
        for(int i=0;i<m+n;i++)
        {
            nums1[i]=arrtest[i];
        }

        
    }
};