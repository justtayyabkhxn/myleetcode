class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int first=0;int second=1;
        while(first<nums.size() && second<nums.size())
        {
            if(nums[first]==nums[second]) return nums[first];
            first++;
            second++;
        }
        return -1;
    }
};