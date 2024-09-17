class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string>ans;
        int n=s1.size(),m=s2.size(),i=0,j=0;
        unordered_map<string,int>mp;
        string word="";
        while(i<n){
            if(s1[i]!=' '){
                word+=s1[i];
            }else{
                ans.push_back(word);
                word="";
            }
            i++;
        }
        ans.push_back(word);
        word="";
        while(j<m){
            if(s2[j]!=' '){
                word+=s2[j];
            }else{
                ans.push_back(word);
                word="";
            }
            j++;
        }
        ans.push_back(word);
        word="";
        for(auto str:ans){
            mp[str]++;
        }
        ans.clear();
        for(auto [str,freq]:mp){
            if(freq==1){
                ans.push_back(str);
            }
        }
        return ans;
    }
};