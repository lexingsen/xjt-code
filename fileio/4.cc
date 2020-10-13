/*
 * @Description: 成绩统计分析输出
 * @Language: C++
 * @Author: lexingsen
 * @Date: 2020-10-14 01:18:01
 */
#include <iostream>
#include <string>
using namespace std;

const int course_num=7;
const int stu_num=1;

struct stu{
  int id;
  string name;
  string sex;
  double score[course_num];
  double average;
};

/*
有一个班的学生 每个学生有7门课的成绩，从键盘上输入以上数据
学号 姓名 性别  七门课的成绩  计算每个学生的平均成绩，讲
输入的数据及计算出的平均成绩输出到文件 student.dat中
*/


stu arr[stu_num];

int main() {
  FILE* fp = fopen("./student.dat", "rw+");
  if (!fp) {
    cout << "打开失败" << endl;
  }

  for (int i=0; i<stu_num; ++i) {
    cout << "请输入学号:";
    cin >> arr[i].id;
    cout << "请输入姓名:";
    cin >> arr[i].name;
    cout << "请输入性别:";
    cin >> arr[i].sex;
    cout << "请输入七门课的成绩:";
    for (int j=0; j<course_num; ++j) {
      cin >> arr[i].score[j];
    }
    double sum = 0;
    for (int j=0; j<course_num; ++j) {
      sum += arr[i].score[j];
    }
    arr[i].average = sum / course_num;
    
  }

  fprintf(fp, "学号 姓名 性别 成绩1 成绩2 成绩3 成绩4 成绩5 成绩6 成绩7 平均成绩\n");
  for (int i=0; i<stu_num; ++i) {
    fprintf(fp, "%d %s %s %lf %lf %lf %lf %lf %lf %lf %lf\n",
    arr[i].id, arr[i].name.c_str(), arr[i].sex.c_str(),
    arr[i].score[1],arr[i].score[2],arr[i].score[3],arr[i].score[4],
    arr[i].score[5],arr[i].score[6],arr[i].score[7],arr[i].average);
  }
  
  fclose(fp);
  return 0;
}