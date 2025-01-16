class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>nums3;
        int n=nums1.size();
        int m=nums2.size();
        int i=0,j=0;
        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                nums3.push_back(nums1[i++]);
            }
            else{
                nums3.push_back(nums2[j++]);}
        }
        while(i<n) nums3.push_back(nums1[i++]);
        while(j<m) nums3.push_back(nums2[j++]);
        int n3= n+m;
        if(n3%2==1){
            return nums3[n3/2];
        }
      return ((double)nums3[n3/2] + (double)nums3[n3/2 - 1]) / 2.0;
    }
};