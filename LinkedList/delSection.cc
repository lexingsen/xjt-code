/*
 * @Description:
 * @Language: 
 * @Author: 
 * @Date: 2020-11-15 23:19:48
 */
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x):val(x), next(nullptr) {

  }
};

ListNode *head;

void create(ListNode* head, int x) {
  auto p = new ListNode(x);
  p->next = head->next;
  head->next = p;
}

void destroy(ListNode *head) {
  ListNode *q, *p=head;
  while (p) {
    q=p->next;
    delete p;
    p = q;
  }
}

void print() {
  auto p = head->next;
  while (p) {
    cout << p->val << " ";
    p = p->next;
  }
  cout << endl;
}


void func(ListNode *head, int x, int y) {
  auto p=head,q=head->next;
  while (q) {
    if (q->val > x && q->val < y) {
      auto del = q;
      p->next = q->next;
      q = q->next;
      delete del;
    } else {
      p = q;
      q = q->next;
    }
  }
}

int main() {
  head = new ListNode(-1);
  for (int i=9; i>=1; --i) {
    create(head, i);
  }
  print();
  func(head, 3,8);
  print();
  destroy(head);
  return 0;
}