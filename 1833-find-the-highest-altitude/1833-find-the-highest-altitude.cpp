class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int high=0;
        int highest=0;
        for(int i=0;i<gain.size();i++){
            high+=gain[i];
            highest=max(highest,high);
        }
        return highest;
    }
};