/*
 * @Description: 统计学生信息并输出
 * @Language: c++
 * @Author: lexingsen
 * @Date: 2020-11-06 23:35:15
 */

/*
建立一个学生在某一个课程到课情况统计程序。功能要求：
（1）可一次性输入所有学生大到课情况，输入学生总人数，该课程总课时，学生学号及其到课情况，
分为正常，迟到，请假和旷课。
（2）可统计某一学生的到课情况的上课率（包括正常和迟到），旷课率，并输出。
（3）可统计所有学生的上课率和旷课率并输出。
*/

#include <bits/stdc++.h>
using namespace std;


struct student {
  string name;
  int id;

  student(string name, int id):name(name),id(id) {}
  student() {}
};

struct course {
  vector<student> stu;
  double totalTime;
  unordered_map<int,int> mp;

  void printInformation() {
    cout << "size:" << stu.size() << endl;
    for (int i=0; i<stu.size(); ++i) {
      int sumf=0;
      int suml=0;
      for (auto c:mp) {
        if (c.first==0 || c.first==1) {
          sumf ++;
        } else if (c.first==2) {
          suml ++;
        }
      }
      cout << "formal rate:" << sumf*1.0 / (sumf+suml) << endl;
      cout << "truant rate:" << suml*1.0 / (sumf+suml) << endl;
    }
  }
};


const int N=3;

int main() {
  int n;
  cout << "please input the number of student:" << endl;
  cin >> n;
  course c;
  cout << "please input the course's totaltime:";
  cin >> c.totalTime;
  for (int i=0; i<n; ++i) {
    cout << "please input student's name and id:";
    string name;
    int id;
    cin >> name >> id;
    c.stu.push_back(student(name, id));
    cout << "please input the course's status 0:formal  1:late  2:truant";
    int status;
    cin >> status;
    c.mp[status] ++;
  }

  int sumf=0;
  int suml=0;
  for (auto x:c.mp) {
    if (x.first==0 || x.first==1) sumf += x.second;
    if (x.first==2) suml += x.second;
  }

  cout << "========== student information ==========" << endl;
  c.printInformation();
  cout << "=========================================" << endl;

  
  cout << "========== course information ==========" << endl;
  cout << "formal rate:" << sumf*1.0 / c.stu.size() << endl;
  cout << "truant rate:" << suml*1.0 / c.stu.size() << endl;
  cout << "========================================" << endl;
  return 0;
}