class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char>vowels={'a','e','i','o','u'};
        int currentvow=0;
        for(int i=0;i<k;i++){
            if(vowels.count(s[i])){
                currentvow++;
            }
        }
        int maxvow=currentvow;
        for(int i=k;i<s.length();i++){
            if(vowels.count(s[i])){
                currentvow++;
            }
            if(vowels.count(s[i-k])){
                currentvow--;
            }
            maxvow=max(maxvow,currentvow);
        }
        return maxvow;
    }
};