#include <bits/stdc++.h>
using namespace std;




/*
统计带头结点单链表中值为x节点的个数
*/

struct ListNode {
  int val;
  ListNode* next;
};

int cnt(ListNode *head) {
  if (!head || !head->next) return 0;
  ListNode *p = head->next;
  int res = 0;
  while (p) {
    res ++;
    p = p->next;
  }
  return res;
}



int main() {
  return 0;
}