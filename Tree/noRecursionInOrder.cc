/*
 * @Description: 二叉树非递归中序遍历
 * @Language: c++
 * @Author: lexingsen
 * @Date: 2020-11-16 08:14:16
 */


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