class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int lmax=0,rmax=0,total=0, left=0,right=n-1;
        while(left<right){
            if(height[left]<height[right]){
                if(lmax>height[left]){
                    total+=lmax-height[left];
                }
                  else{
                        lmax=height[left];
                        
                    }
                    left+=1;
            }
            else{
                if(rmax>height[right]){
                    total+=rmax-height[right];
                }
                else{
                    rmax=height[right];
                    
                }
                right-=1;
            }
        }
        return total;
    }
};