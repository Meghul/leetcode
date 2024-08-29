class Solution {
public:
    bool isPalindrome(string s) {
        string a;
        for(int i=0;i<s.length();i++){
            if(isalpha(s[i])||isalnum(s[i])){
                a+=tolower(s[i]);
            }
        }
        string c=a;
        reverse(c.begin(),c.end());
        return a==c;
    }
};