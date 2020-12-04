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


void func() {
  auto p=head,q=head->next;
  while (q && q->next) {
    if (q->next->val < q->val) {
      q = q->next;
      p = p->next;
    } else {
      break;
    }
  }
  p->next = q->next;
  q->next = head->next;
  head->next = q;
}

int main() {
  head = new ListNode(-1);
  for (int i=0; i<1; ++i) {
    create(head, i);
  }
  print();
  func();
  print();
  destroy();
  return 0;
}