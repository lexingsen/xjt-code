
/*
求逆序对的个数
*/
const int N=10010;
int t[N]={0};
int res = 0;
void invertPairs(int *a, int l, int r) {
  if (l >= r) return;
  int m = (r+l)/2;
  invertPairs(a, l, m);
  invertPairs(a, m+1,r);
  int i=l,j=m+1,k=0;
  while (i <= m && j <= r) {
    if (a[i] <= a[j]) {
      t[k++] = a[i++];
    } else {
      res += m-i+1;
      t[k++] = a[j++];
    }
  }

  while (i <= m) t[k++]=a[i++];
  while (j <= r) t[k++]=a[j++];
  for (int i=l,k=0; i<=r; ++i,++k) a[i] = t[k];
}