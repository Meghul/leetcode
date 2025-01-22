class Solution {
public:
     string printstack(stack<char>& s) {
        string result = "";
        while (!s.empty()) {
            result.push_back(s.top()); 
            s.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
    string removeStars(string s) {
        int n=s.length();
        stack<char>st;
        for(int i=0;i<n;i++){
            if(s[i]!='*'){
            st.push(s[i]);
            }
            else{
                st.pop();
            }
        }
         return printstack(st);
    }
};