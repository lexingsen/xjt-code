/*
 * @Description: 编写一个候选人得票的统计程序
 * @Language: C++
 * @Author: lexingsen
 * @Date: 2020-10-13 11:35:44
 */
#include <bits/stdc++.h>
using namespace std;


struct candidate {
  string name;
  int cnt;
};

const int N=10;
const int M=5;
candidate candi[N];



int main() {
  cout << "请输入N个候选人的姓名:" << endl;
  for (int i=0; i<N; ++i) {
    cin >> candi[i].name;
    candi[i].cnt = 0;
  }

  cout << "请输入名字" << endl;
  for (int i=0; i<M; ++i) {
    string name;
    cin >> name;
    for (int j=0; j<N; ++j) {
      if (candi[j].name == name) {
        candi[j].cnt ++;
      }
    }
  }

  for (int i=0; i<N; ++i) {
    cout << "name:" << candi[i].name << ", 票数:" << candi[i].cnt << endl;
  }
  return 0;
}