/*
 * @Description: 共享栈的实现
 * @Language: 
 * @Author: 
 * @Date: 2020-11-07 07:56:45
 */
#include <bits/stdc++.h>
using namespace std;



class SharedStack {
public:
  // [0，N-1]  top1=-1  top2=N都是无效的边界
  SharedStack(int capacity) {
    data = new int[capacity];
    N = capacity;
    top1 = -1;
    top2 = capacity;
  }



  ~SharedStack() {
    delete[] data;
  }

  bool isEmpty() {
    return top1==-1 && top2==N;
  }

  bool isFull() {
    return top1+1==top2;
  }

  void push_left(int x) {
    if (isFull()) {
      cout << "the shared stack is full!" << endl;
      return;
    }
    data[++top1] = x;
  }

  void push_right(int x) {
    if (isFull()) {
      cout << "the shared stack is full!" << endl;
      return;
    }
    data[--top2] = x;
  }

  int get_left_top() {
    if (top1==-1) {
      cout << "the left stack is empty!" << endl;
      return -1;
    }
    return data[top1];
  }

  int get_right_top() {
    if (top2==N) {
      cout << "the right stack is empty!" << endl;
      return -1; 
    }
    return data[top2];
  }
              

  void pop_left() {
    if (top1==-1) {
      cout << "the left is empty!" << endl;
      return;
    }
    top1 --;
  }

  void pop_right() {
    if (top2==N) {
      cout << "the right is empty!" << endl;
      return;
    }
    top2 ++;
  }
private:  
  int *data;
  int N;
  int top1;
  int top2;
};



int main() {
  SharedStack st(10);
  for (int i=0; i<9; ++i) st.push_left(i);
  while (!st.isEmpty()) {
    cout << st.get_left_top() << " ";
    st.pop_left();
  }
  cout << endl;  
  return 0;
}