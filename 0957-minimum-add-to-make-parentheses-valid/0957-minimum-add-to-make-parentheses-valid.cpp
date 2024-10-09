class Solution {
public:
    int minAddToMakeValid(string s) {
        int c=0;
        stack<char>S;
        for(char i :s){
            if(i=='('){
                S.push(i);
            }
            else{
                if(S.empty()){
                    c++;
                }
                else{
                    S.pop();
                }
            }
        }
        return c+S.size();
    }
};