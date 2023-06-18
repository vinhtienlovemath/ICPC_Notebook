#include <bits/stdc++.h>
using namespace std;

#define sqr(x) ((x) * (x))

void solve();
void multiTestCasesSolve();

int main () {
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  multiTestCasesSolve();
  return 0;
}

void multiTestCasesSolve() {
  //freopen("INP.txt", "r", stdin);
  //freopen("OUT.txt", "w", stdout);
  
  //Multiple test cases, default one test case.
  int nTestCases = 1;
  //cin >> nTestCases;
  for(int index = 1; index <= nTestCases; ++index) {
    solve();
  }
  
  //cerr << "\nTime elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n"; 
}

void solve() { }
