#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

// Assuming TreeNode is already defined as:
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };

class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, TreeNode*> nodeMap;
        unordered_set<int> children;

        for (const auto& description : descriptions) {
            int parentValue = description[0];
            int childValue = description[1];
            bool isLeft = description[2];

            if (nodeMap.count(parentValue) == 0) {
                nodeMap[parentValue] = new TreeNode(parentValue);
            }

            if (nodeMap.count(childValue) == 0) {
                nodeMap[childValue] = new TreeNode(childValue);
            }

            if (isLeft) {
                nodeMap[parentValue]->left = nodeMap[childValue];
            } else {
                nodeMap[parentValue]->right = nodeMap[childValue];
            }

            children.insert(childValue);
        }

        for (const auto& [value, node] : nodeMap) {
            if (children.count(value) == 0) {
                return node;
            }
        }

        return nullptr;
    }
};
