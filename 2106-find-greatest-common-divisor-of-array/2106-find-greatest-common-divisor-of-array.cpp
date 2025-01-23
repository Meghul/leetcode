class Solution {
public:
    int ans(int a,int b){
        while(b!=0){
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
    
        return ans(nums[0],nums[nums.size()-1]);
    }
};