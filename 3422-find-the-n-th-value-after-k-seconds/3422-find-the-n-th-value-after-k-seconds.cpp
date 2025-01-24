class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        const int MOD= 1e9+7;
        vector<int>a(n,1);
        for(int i=0;i<k;i++){
            vector<int>temp(n,0);
            temp[0]=a[0];
            for(int i=1;i<n;i++){
                
                temp[i]=(temp[i-1]+a[i])%MOD;
            }
            a=temp;
        }
        return a[n-1];
    }
};