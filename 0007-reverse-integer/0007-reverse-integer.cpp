class Solution {
public:
    int reverse(int x) {
        int a=x,ans=0;
        while(a!=0){
            int digit=a%10;
            if((ans>INT_MAX/10)|| (ans<INT_MIN/10)){
                return 0;
            }
            ans=ans*10+digit;
            a/=10;
        }
return ans;
    }
};