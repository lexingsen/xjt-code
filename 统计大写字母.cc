/*
 * @Description: 统计大写字母出现的次数$结尾  次数从大到小依次输出 相同次数按照字典序输出
 * @Language: C++
 * @Author: lexingsen
 * @Date: 2020-10-12 09:18:36
 */
#include <bits/stdc++.h>
using namespace std;


const int N=26;

struct node {
  char c;
  int cnt;
};
node size[26];


void bubbleSort(node *s, int n) {
  int i,j;
  bool flag = false;
  for (i=0; i<n-1; ++i) {
    flag = false;
    for (j=0; j<n-1-i; ++j) {
      if (s[j].cnt < s[j+1].cnt) {
        flag = true;
        swap(s[j], s[j+1]);
      } else if (s[j].cnt == s[j+1].cnt && s[j].c > s[j+1].c) {
        flag = true;
        swap(s[j], s[j+1]);
      }
    }
    if (!flag) break;
  }
}

void print() {
  for (int i=0; i<N; ++i) {
    if (size[i].cnt != 0) {
      cout << size[i].c << ":" << size[i].cnt << endl;
    }
  }
  cout << endl;
}


int main() {
  for (int i=0; i<N; ++i) {
    size[i].c = i+'A';
    size[i].cnt = 0;
  }

  cout << "请输入字符串,以$结尾:" << endl;
  string s;
  cin >> s;
  int i = 0;
  while (s[i] != '$') {
    if ('A' <= s[i] && s[i] <= 'Z') size[s[i]-'A'].cnt ++;
    i ++;
  }
  print();

  // 排序
  bubbleSort(size, N);
  print();

  return 0;
}

