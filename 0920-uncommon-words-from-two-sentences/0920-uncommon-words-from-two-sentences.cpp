class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> mp;
        vector<string> ans;
        istringstream iss1(s1);
        string word1;
        while (iss1 >> word1) {
            mp[word1]++;
        }
        istringstream iss2(s2);
        string word2;
        while (iss2 >> word2) {
            mp[word2]++;
        }
        for (auto& it : mp) {
            if (it.second == 1) {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};