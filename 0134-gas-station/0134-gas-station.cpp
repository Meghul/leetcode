class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
         int totaldiff=0,n=gas.size(),index=0,fuel=0;
         for(int i=0;i<n;i++){
            int dif=gas[i]-cost[i];
            totaldiff+=dif;
            fuel+=dif;
            if(fuel<0){
                index=i+1;
                fuel=0;
            }
         }
         return (totaldiff<0)? -1 :index;
    }
};