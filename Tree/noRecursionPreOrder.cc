/*
 * @Description: 
 * @Language: 
 * @Author: 
 * @Date: 2020-11-16 08:14:13
 */
#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left, *right;
};


vector<int> preOrder(TreeNode *root) {
  vector<int> res;
  if (!root) return res;
  auto p = root;
  stack<TreeNode*> st;
  while (st.size() || p) {
    if (p) {
      st.push(p);
      res.push_back(p->val);
      p = p->left;
    } else {
      auto top = st.top(); st.pop();
      p = top->right;
    }
  }
  return res;
}


vector<int> postOrder(TreeNode *root) {
  vector<int> res;
  if (!root) return res;
  stack<TreeNode*> st;
  auto p = root;
  TreeNode *tag = nullptr;
  while (st.size() || p) {
    while (p) {
      st.push(p);
      p = p->left;
    }
    p = st.top(); st.pop();
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