class Solution {
public:
    bool canJump(vector<int>& nums) {
        int finalJump= nums.size()-1;
        for(int ind = nums.size()-1;ind>=0;ind--){
            if(ind+nums[ind]>=finalJump){
                finalJump=ind;
            }
        }
        return finalJump==0;
    }
};