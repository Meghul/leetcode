class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int miniprice=prices[0];
        int maxpro=0;
        for(int i=0;i<prices.size();i++){
            miniprice=min(miniprice,prices[i]);
            int cost=prices[i]-miniprice;
            maxpro=max(maxpro,cost);
        }
        return maxpro;
    }
};