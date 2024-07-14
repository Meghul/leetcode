#include <string>
#include <map>

using namespace std;

class Solution {
public:
    string countOfAtoms(string formula) {
        int i = 0;
        map<string, int> counts = parse(formula, i);
        string ans;
        for (const auto& p : counts) {
            ans += p.first;
            if (p.second > 1)
                ans += to_string(p.second);
        }
        return ans;
    }

private:
    map<string, int> parse(string& formula, int& i) {
        map<string, int> counts;
        while (i < formula.size() && formula[i] != ')') {
            if (formula[i] == '(') {
                i++;  // Skip '('
                map<string, int> subCounts = parse(formula, i);
                int iStart = ++i;
                while (i < formula.size() && isdigit(formula[i])) { i++; }
                int multiplicity = iStart < i ? stoi(formula.substr(iStart, i - iStart)) : 1;
                for (const auto& p : subCounts) {
                    counts[p.first] += p.second * multiplicity;
                }
            } else {
                int iStart = i++;
                while (i < formula.size() && islower(formula[i])) { i++; }
                string name = formula.substr(iStart, i - iStart);
                iStart = i;
                while (i < formula.size() && isdigit(formula[i])) { i++; }
                int count = iStart < i ? stoi(formula.substr(iStart, i - iStart)) : 1;
                counts[name] += count;
            }
        }
        return counts;
    }
};
