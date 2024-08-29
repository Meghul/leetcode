class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int index=n-k;
        int ans=nums[index];
return ans;
    }

};