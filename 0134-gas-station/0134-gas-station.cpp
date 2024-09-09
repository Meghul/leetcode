class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totaldif=0,fuel=0,index=0,n=gas.size();
        for(int i=0;i<n;i++){
            int dif=gas[i]-cost[i];
            totaldif+=dif;
            fuel+=dif;
            if(fuel<0){
                index=i+1;
                fuel=0;
            }
        }
        return (totaldif<0)?-1:index;
    }
};