#include <iostream>
#include <stack>
#include <vector>

using std::cout;
using std::endl;
using std::stack;
using std::vector;

class TreeNode {
 public:
  int val;
  TreeNode *left, *right;
  TreeNode(int val) {
    this->val = val;
    this->left = this->right = NULL;
  }
};

class Solution {
 public:
  vector<int> PostorderTraversal(TreeNode* root) {
    vector<int> res;
    stack<TreeNode*> stk;
    TreeNode* prenode = NULL;
    while (root != NULL || !stk.empty()) {
      if (root != NULL) {
        stk.push(root);
        root = root->left;
      } else if (stk.top()->right != prenode) {
        root = stk.top()->right;
        prenode = NULL;
      } else {
        prenode = stk.top();
        res.push_back(prenode->val);
        stk.pop();
      }
    }
    return res;
  }
};

int main() {
  TreeNode* root_node(new TreeNode(1));
  TreeNode* left_node(new TreeNode(2));
  TreeNode* right_node(new TreeNode(3));

  root_node->left = left_node;
  root_node->right = right_node;

  Solution solution;
  auto res = solution.PostorderTraversal(root_node);
  for (int i = 0; i < res.size(); ++i) {
    cout << res[i] << endl;
  }

  delete root_node;
  delete left_node;
  delete right_node;
  return 0;
}
