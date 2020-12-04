/*
 * @Description: 使用结构体数组存储三个学生的学号，姓名，性别和三门单科成绩。
 * 输出总分最高的学生以及有一门或一门以上不及格的学生的各项数据
 * @Language: 
 * @Author: 
 * @Date: 2020-10-13 11:23:58
 */
#include <bits/stdc++.h>
using namespace std;

struct student {
  int id;
  string name;
  string sex;
  double a,b,c;

  double sum;
};

const int N=3;
student stu[N];

void print(int i) {
  cout << "id:" << stu[i].id << endl;
  cout << "name:" << stu[i].name << endl;
  cout << "sex:" << stu[i].sex << endl;
  cout << "course a grade:" << stu[i].a << endl;
  cout << "course b grade:" << stu[i].b << endl;
  cout << "course c grade:" << stu[i].c << endl;
}


int main() {
  for (int i=0; i<N; ++i) {
    cout << "请输入学号，姓名，性别和三科成绩:" << endl;
    cin >> stu[i].id >> stu[i].name >> stu[i].sex >> stu[i].a >> stu[i].b >> stu[i].c;
    stu[i].sum = stu[i].a + stu[i].b + stu[i].c;
  }

  int maxId = -1;
  int maxGrade = -1;
  for (int i=0; i<N; ++i) {
    if (stu[i].sum > maxGrade) {
      maxGrade = stu[i].sum;
      maxId = -1;
    }
  }
  cout << "成绩最高的学生各项信息:" << endl;
  print(maxId);

  for (int i=0; i<N; ++i) {
    if (stu[i].a < 60 || stu[i].b < 60 || stu[i].c < 60) {
      print(i);
    }
  }
  return 0;
}