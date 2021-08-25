/*
输入若干个点的左边,(x,y),x,y都是正整数。当输入(0，0)时间表示结束.
现在要求输入完毕后，输出一个长方形左下角和右上角的坐标，要求长方形
区域覆盖所有输入点的坐标(若只输入了一个点，则可以只输入一个点)
*/

#include <bits/stdc++.h>
using namespace std;


int main() {
  freopen("in.txt", "r", stdin);
  int x,y;
  int res = 0;
  int minx=INT_MAX,miny=INT_MAX,maxx=INT_MIN,maxy=INT_MIN;
  while (cin >> x >> y && x!=0 && y !=0) {
    minx = min(x, minx);
    miny = min(y, miny);
    maxx = max(x, maxx);
    maxy = max(y, maxy);
    res ++;
  }

  if (res == 1) {
    cout << "x = " << x << ", y = " << y << endl;
  } else {
    cout << "(" << minx << "," << miny << ")" << endl;
    cout << "(" << maxx << "," << maxy << ")" << endl;
  }
  return 0; 
}