class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();;
        map<int, int> mpp;
        int first = 0;
        int second = 0;
        int ans = 1;
        while (first < n && second < n) {
            mpp[nums[second]]++;
           while(mpp[nums[second]] > k) {
                mpp[nums[first]]--;
                first++;
            }
            ans = max(ans, second - first + 1);
            second++;
        }
        return ans;
    }
};