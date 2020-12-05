/*
 * @Description: 非递归前序遍历
 * @Language: c++
 * @Author: lexingsen
 * @Date: 2020-11-16 08:14:13
 */

#include <bits/stdc++.h>
using namespace std;


struct TreeNode {
  int val;
  TreeNode *left, *right;
};

class Solution {
public:
  vector<int> preOrder(TreeNode *root) {
    vector<int> res;
    stack<TreeNode*> st;
    auto p = root;
    while (!st.empty() || p) {
      if (p) {
        st.push(p);
        res.push_back(p->val);
        p = p->left;
      } else {
        TreeNode *t = st.top(); st.pop();
        p = t->right;
      }
    }
    return res;
  }
};