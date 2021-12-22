#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
  int H, C, Q;
  int hi, si, ei;
  int h, t;
  int flag;
  int a[100000];
  vector<tuple<int,int,int>> P;
  scanf("%d%d%d", &H, &C, &Q);
  for (int i=0; i<C; i++) {
    scanf("%d%d%d", &hi, &si, &ei);
    P.push_back({hi, si, ei});
  }
  for (int i=0; i<Q; i++) {
    scanf("%d%d", &h, &t);
    flag = 0;
    for (auto p : P) {
      if (h <= get<0>(p) && get<1>(p) <= t && t <= get<2>(p)) {
        a[i] = 1;
        flag = 1;
        break;
      }
    }
    if (!flag) {
      a[i] = 2;
    }
  }
  for(int j = 0;j<Q;j++){
    if(a[j] == 1){
        printf("NO\n");
    }else{
        printf("YES\n");
    }
  }
  return 0;
}
