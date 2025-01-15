class Solution {
public:
    int jump(vector<int>& nums) {
        int totaljump=0;
        int coverage=0;
        int lastjumpidx=0;
        int destination=nums.size()-1;
        if(nums.size()==1)return 0;
        for(int i=0;i<nums.size();i++){
            coverage=max(coverage,i+nums[i]);
            if(i==lastjumpidx){
                if(i!=destination){
                    lastjumpidx=coverage;
                    totaljump++;
                }
                if(coverage>=destination){
                    return totaljump;
                }
                }
        }
        return totaljump;
    }
};