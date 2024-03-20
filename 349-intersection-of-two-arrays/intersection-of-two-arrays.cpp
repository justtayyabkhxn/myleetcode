class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        unordered_set<int> arr;
        vector<int> ans;
        int first=0;
        int second=0;
        while(first<nums1.size())
        {
            int left=0;
            int el=nums1[first];
            int right=nums2.size()-1;
            while(left<=right)
            {
                int mid=(left+right)/2;
                if(nums2[mid]==el) 
                {
                arr.insert(el);
                break;
                }
                else if(nums2[mid]<el)
                {
                    left=mid+1;
                }
                else if(nums2[mid]>el)
                {
                    right=mid-1;
                }
            }
            first++;
        }
        for(auto it : arr){
       ans.push_back(it);
   }
        return ans;
    }
};