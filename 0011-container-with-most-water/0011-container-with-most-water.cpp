class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int maxarea=0;
        while(left<right){
            int width=right-left;
            int currentheight=min(height[left],height[right]);
            int currentarea =width*currentheight;
             maxarea=max(maxarea,currentarea);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxarea;

        
    }
};