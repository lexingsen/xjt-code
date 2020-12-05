

#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left, *right;
};

vector<int> inOrder(TreeNode *root) {
  vector<int> res;
  if (!root) return res;
  stack<TreeNode*> st;
  auto p = root;
  while (p || st.size()) {
    while (p) {
      st.push(p);
      p = p->left;
    }
    p = st.top();st.pop();
    res.push_back(p->val);
    p = p->right;
  }
  return res;
}