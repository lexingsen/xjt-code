/*
 * @Description: 求链表第K个位置上的节点 查找成功输出对应的data  返回1  失败返回0
 * @Language: 
 * @Author: 
 * @Date: 2020-11-07 07:56:40
 */
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
  ListNode *next;
  int val;

  ListNode(int x) {
    this->val = x;
    this->next = nullptr;
  }
};


bool findKthNode(ListNode *head, int k) {
  if (!head) return false;
  ListNode *p = head->next;
  int loop=k;
  while (loop-- && p) {
    p = p->next;
  }
  if (loop < 0) {
    cout << "p->val = " << p->val << endl;
    return true;
  } else {
    return false;
  }
}

ListNode *head;

void add(int x) {
  ListNode *p = new ListNode(x);
  p->next = head->next;
  head->next = p;
}

void destroy() {
  ListNode* p = head;
  while (p) {
    auto q=p->next;
    delete p;
    p = q;
  }
}


void show() {
  auto p = head->next;
  while (p) {
    cout << p->val << " ";
    p = p->next;
  }
  cout << endl;
}


int main() {
  head = new ListNode(-1);
  for (int i=1; i<=10; ++i) {
    add(i);
  }
  show();
  cout << findKthNode(head, 0) << endl;
  cout << findKthNode(head, 9) << endl;
  cout << findKthNode(head, 3) << endl;
  cout << findKthNode(head, 22) << endl;
  destroy();
  return 0;
}