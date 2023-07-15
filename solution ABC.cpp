#include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  n--;
  int64_t c = 0;
  for(int i = 1; i <= n; i++) {
    c += n/i;
  }
  cout << c << endl;
}