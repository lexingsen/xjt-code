/*
 * @Description: 
 * @Language: 
 * @Author: 
 * @Date: 2020-11-16 08:14:27
 */
#include <bits/stdc++.h>
using namespace std;


struct TreeNode {
  int val;
  TreeNode *left, *right;
};


vector<int> postOrder(TreeNode *root) {
  vector<int> res;
  if (!root) return res;
  stack<TreeNode*> st;
  auto p = root;
  TreeNode* tag = nullptr;
  while (!st.empty() || p) {
    while (p) {
      st.push(p);
      p = p->left;
    }
    p = st.top();st.pop();
    // 右边空或者右边已经访问过
    if (!p->right || p->right==tag) {
      res.push_back(p->val);
      tag = p;
      p = nullptr;
    } else {
      st.push(p);
      p = p->right;
    }
  }
  return res;
}
