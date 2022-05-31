#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  int cur, n, maxN;

  getline(cin, s);
  n = s.size();
  cur = maxN = 1;

  for (int i = 1; i < n; i++) {
    if (s[i] == s[i - 1])
      cur++;
    else
      cur = 1;
    maxN = max(maxN, cur);
  }

  printf("%d\n", maxN);
}