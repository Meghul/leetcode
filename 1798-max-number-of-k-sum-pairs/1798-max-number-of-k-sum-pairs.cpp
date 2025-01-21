class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int cnt=0;
        int n=nums.size();
        int i=0;
        int j=n-1;
        
        while(i<j){
            int sum=nums[i]+nums[j];
            if(sum==k){
                cnt++;
                i++;
                j--;
            }
            else if(sum>k){
                j--;
            }
            else{
                i++;
            }
        }
        return cnt;
    }
};