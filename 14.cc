/*
 * @Description: 输入五名大学生的四门功课的成绩，然后求
 *  (1)每个大学生的总分
 *  (2)每门课程的平均分
 *  (3)输出总分最高的学生的姓名和总分数
 * @Language: 
 * @Author: 
 * @Date: 2020-10-14 14:01:28
 */
#include <bits/stdc++.h>
using namespace std;


const int N=5;
double a[N], b[N], c[N], d[N];

struct student {
  int id;
  string name;
  double math, english, chinese, chemical, sum;
};

student arr[N];

int main() {
  for (int i=0; i<N; ++i) {
    int id;
    cout << "input id:";
    cin >> id;
    cout << "input name:";
    string name;
    cin >> name;
    cout << "input math english chinese chemical:";
    double math, english, chinese, chemical;
    cin >> math >> english >> chinese >> chemical;
    double sum = math+english+chinese+chemical;

    arr[i] = {id, name, math, english, chinese, chemical, sum};
    a[i] = math;b[i] = english;c[i] = chinese;d[i] = chemical;
  }
  int av=0, bv=0, cv=0, dv=0;;
  for (int i=0; i<N; ++i) {
    av += a[i];
    bv += b[i];
    cv += c[i];
    dv += d[i];
  }
  cout << "math:" << av/N << endl;
  cout << "english:" << av/N << endl;
  cout << "chinese:" << av/N << endl;
  cout << "chemical:" << av/N << endl;

  int maxI = -1;
  int maxV = -1;
  for (int i=0; i<N; ++i) {
    if (arr[i].sum > maxV) {
      maxV = arr[i].sum;
      maxI = i;
    }
  }
  cout << arr[maxI].name << "," << arr[maxI].sum << endl;
  return 0;
}


