/*
 * @Description: 输入几名学生的姓名和成绩，要求分数相同时相对顺序输入时不变。进行排序后输出：
 * @Language: C++
 * @Author: lexingsen
 * @Date: 2020-11-06 20:59:51
 */
#include <bits/stdc++.h>
using namespace std;


struct student {
  string name;
  double score;
};

const int N=4;
student stu[N];


bool cmp(const student &a, const student &b) {
  return a.score > b.score;
}

int main() {
  freopen("in.txt", "r", stdin);
  for (int i=0; i<N; ++i) {
    cin >> stu[i].name >> stu[i].score;
  }
  stable_sort(stu, stu+N, cmp);
  for (int i=0; i<N; ++i) {
    cout << stu[i].name << ":" << stu[i].score << endl;
  }
  return 0;
}