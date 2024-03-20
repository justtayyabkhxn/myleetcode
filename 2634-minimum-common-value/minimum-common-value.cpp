class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int first=0;
        int second=0;
        while(first<n1 && second<n2)
        {
           if(nums1[first]>nums2[second]) second++;
           else if(nums1[first]<nums2[second]) first++;
           else return nums1[first];
        }
        
        return -1;
    }
};