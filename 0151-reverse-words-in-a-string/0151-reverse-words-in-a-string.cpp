class Solution {
public:
    string reverseWords(string s) {
        vector<string>word;
        int n=s.size();
        int i=0;
        while(i<n){
            while(i<n&&s[i]==' '){
                i++;
            }
            if(i==n)break;
            string temp;
            while(i<n && s[i]!=' '){
                temp+=s[i++];
            }
            word.push_back(temp);
        }
        reverse(word.begin(),word.end());
        string ans="";
        for(int j=0;j<word.size();j++){
            ans+=word[j];
            if(j<word.size()-1){
                ans+=' ';
            }
        }
        return ans;
    }
};