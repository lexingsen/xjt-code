/*
 * @Description: 
 * @Language: 
 * @Author: 
 * @Date: 2020-11-16 00:10:09
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

void destroy() {
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


void func(ListNode *head) {
  auto p=head,q=head->next;
  auto premin=head,pmin=head;
  pmin->val = INT_MAX;
  while (q) {
    if (q->val < pmin->val) {
      pmin = q;
      premin = p;
    }
    p = p->next, q = q->next;
  }
  premin->next = pmin->next;
  pmin->next = nullptr;
  delete pmin;
}

int main() {
  head = new ListNode(-1);
  int a[] = {2,4,5,3,1};
  int n = sizeof(a)/sizeof(int);
  for (int i=0; i<n; ++i) {
    create(head, a[i]);
  }
  print();
  func(head);
  print();
  destroy();
  return 0;
}