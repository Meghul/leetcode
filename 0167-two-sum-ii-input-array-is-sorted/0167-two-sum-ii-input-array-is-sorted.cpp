class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int i=0,j=n-1;
        vector<int>num;
        while(i<j){
            if(numbers[i]+numbers[j]==target){
                num.push_back(i+1);
                num.push_back(j+1);
                break;
            }
            else if(numbers[i]+numbers[j]<target){
                i++;
            }
                else{
                    j--;
                
            }
        }
        return num;
    }
};