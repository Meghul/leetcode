class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left=0;
        int right=0;
        int k=1;
        int maxlength=0;
        while(right<nums.size()){
            if(nums[right]==0){
                k--;
            }
            right++;
            while(k<0){
                if(nums[left]==0){
                    k++;
                }
                left++;
            }
            maxlength=max(maxlength,right-left);
        }
        return maxlength-1;
    }
};