/*
 * @Description: 
 * @Language: 
 * @Author: 
 * @Date: 2020-11-15 23:13:33
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

void print(ListNode *head) {
  auto p = head;
  while (p) {
    cout << p->val << " ";
    p = p->next;
  }
  cout << endl;
}

void print() {
  auto p = head->next;
  while (p) {
    cout << p->val << " ";
    p = p->next;
  }
}


// 单链表逆置
ListNode* reverse(ListNode *head) {
  if (!head) return head; 
  auto a=head, b=a->next;
  head->next = nullptr;
  while (b) {
    auto c = b->next;
    b->next = a;
    a = b, b = c;
  }
  return a;
}

void print(int x) {
  if (!x) {
    return;
  }
  cout << x%10 << " ";
  print(x/10);
}


void func(int a) {
  int x = a;
  stack<int> st;
  for (int i=10000; i; i/=10) {
    st.push(x/i);
    x %= i;
  }
  while (!st.empty()) {
      auto f=st.top();st.pop();
      cout << f << " ";
  }
  cout << endl;
}


void f(int x) {
  while (x!=0) {
    cout << x % 10 << " ";
    x /= 10;
  }
}

int main() {
  func(12340);
  print(12340); cout << endl;
  f(12340);
  return 0;
}



#if 0

int main() {
  head = new ListNode(-1);
  for (int i=0; i<10; ++i) {
    create(head, i);
  }
  print(); cout << endl;
  auto res = reverse(head->next);
  print(res);
  return 0;
}

#endif